//update mới nhất
#include<Stepper.h>
#include "DHT.h"  
#include<DS1302.h>
#include<EEPROM.h>
DS1302 rtc(2,3,4);
Time t;          
const int DHTPIN = 5;      
const int DHTTYPE = DHT11;  
DHT dht(DHTPIN, DHTTYPE);
String m="k";
int rainSensor = 6;
const int sobuoc = 2048;
Stepper mystepper = Stepper(sobuoc, 8, 10, 9, 11);
int sobuocmax = 5000;
int vitri=0;
int phantram=0;
int statusrem=0;
String data="";
int nhiet=0,am=0,nhietdodat=100;
unsigned long times=0;
int ct1=0,ct2=0,ct3=0,ct4=0,ct5=0;
int dh=0,dp=0,dg=0;
int sh=0,sp=0,sg=0;
int tocdo=3;
//thiết lập cho cảm biến ánh sáng chân A0
int asmin=40;
int asmax=550;

void setup() {
  pinMode(rainSensor,INPUT);
  mystepper.setSpeed(3);
  dht.begin();  
  nhietdo();
  Serial.begin(9600);
  rtc.halt(false);
  rtc.writeProtect(false);
  vitri=EEPROM.read(1)*50;
}

void loop() 
 {
  t=rtc.getTime();
  byte c;
  String valstr;
  int val;
  mystepper.setSpeed(tocdo);
  if(Serial.available())
  {
      
        c=Serial.read();
        data+=(char)c;
 
        if(c=='\r'||c=='\n')
        {
          data.trim();
          switch(data.charAt(0))
          {
            case 'm':
             statusrem=2;break;
           case 'd':
              statusrem=1;break;
            case 's':
             statusrem=0;break;
           case 'q':
              ct1=1;break;
            case 'w':
              ct1=0;break;
            case 'e':
              ct2=1;break;
            case 'r':
              ct2=0;break;
            case 'z':
              ct5=1;break;
            case 'x':
              ct5=0;break;
            case '4':
            {
              ct3=1;
              ct4=1;
              break;
            }
            case '3':
            {
              ct3=1;
              ct4=0;
              break;
            }
            case '2':
            {
              ct3=0;
              ct4=1;
              break;
            }
            case '1':
            {
              ct3=0;
              ct4=0;
              break;
            }
             case 'v':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                vitriv(val);
                statusrem=-1;
                break;
              } 
              case 't':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                nhietdodat=val;
                break;
              } 
              case 'c':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                dh=val;
                break;
              } 
              case 'b':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                dp=val;
                break;
              } 
             case 'j':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                sh=val;
                break;
              }
             case 'k':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                sp=val;
                break;
              }  
             case 'p':
              {
                valstr=data.substring(1);
                val=valstr.toInt();
                tocdo=3*val;
                break;
              } 
            }
            data="";
        }
       
  }
  
  if(statusrem==2&&vitri>=0&&vitri<sobuocmax){
    mo();}
  if(statusrem==1&&vitri>0&&vitri<=sobuocmax){
    dong();}
   if(statusrem==0){
    dung();}
   if(kiemtramua()==1)
     {
      m="c";
     }
     else{
      m="k";
     }
   if((unsigned long )(millis()-times)>5000)
   {
    times=millis();
    nhietdo();
   }
   if(ct1==1&&kiemtramua()==1)
      ct5=0;
  if(ct1==1)
    dongremtroimua();
  if(ct2==1)
    moremnhietdo(nhietdodat);
  if(ct3==1)
    morem();
   if(ct4==1)
    dongrem();
   if(ct5==1)
    moremtheoas();
}
void mo()
{
    mystepper.step(sobuocmax/100);
    vitri+=sobuocmax/100;
    String v=(String)tinhphantram()+"|"+(String)nhiet+"|"+m+"|"+(String)am+"|\n";
    Serial.print(v);
    EEPROM.write(1,tinhphantram());
}
void dong()
{
  
    mystepper.step(-sobuocmax/100);
    vitri-=sobuocmax/100;
    String v=(String)tinhphantram()+"|"+(String)nhiet+"|"+m+"|"+(String)am+"|\n";
    Serial.print(v);
    EEPROM.write(1,tinhphantram());
}
void dung()
{
      vitriv(tinhphantram());
      String v=(String)tinhphantram()+"|"+(String)nhiet+"|"+m+"|"+(String)am+"|\n";
      Serial.print(v);
      delay(1000);
      
}
void vitriv(int a)
{
int  b=tinhphantram();
  while(b!=a){
  if(a>tinhphantram())
    mo();
  else if(a<tinhphantram())
    dong();
    else
      dung();
  b=tinhphantram();}
}

int tinhphantram()
{
  return (vitri*100/5000);
}
int kiemtramua()
{
  int value = digitalRead(rainSensor);
  if(value==HIGH)
    return 1;
  else
    return 0;
}
void nhietdo()
{
   am = dht.readHumidity();    
   nhiet = dht.readTemperature(); 
 
}
void dongremtroimua()
{
  if(kiemtramua()==1)
    vitriv(100);
}
void moremnhietdo(int a)
{
  if(nhiet>=a)
    vitriv(100);
}
void morem()
{
  if(dh==t.hour&&dp==t.min&&dg==0)
  {
    vitriv(100);
    delay(1000);
  }
}
void dongrem()
{
  if(sh==t.hour&&sp==t.min&&sg==0)
  {
    vitriv(0);
    delay(1000);
  }
}
void moremtheoas()
{
  int a;
  a=(analogRead(A0)-asmin)*100/(asmax-asmin);
  if(a<=0)
    vitriv(100);
  else if(a>=100)
    vitriv(0);
  else
  {
    vitriv(100-a);
  }
}
