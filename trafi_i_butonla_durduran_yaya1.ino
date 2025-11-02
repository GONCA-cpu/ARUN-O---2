// define buton için gerekli ve butonu 8 e bağladığımız için ()bunu içine de  8 yazdık 
#define STOP digitalRead(8)
void setup()
{
  pinMode(8,INPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(11,HIGH);//araç için olan yeşil açık
  delay(1000);
  
  if(STOP)
  {
     digitalWrite(11,LOW);//araç için olan yeşil kapalı
    digitalWrite(9,HIGH);//yaya için yeşil yanıyo
    digitalWrite(13,HIGH);//araç için kırmızı yanıyo
  
   delay(4000);
    digitalWrite(9,LOW);//yaya için yeşil kapalı
    digitalWrite(13,LOW);//araç için kırmızı kapalı
  }
  //butonu basmayı bırakınca da araçlar için yeşil yanıcak
}
    