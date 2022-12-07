/*自動澆水系統，基本版
 * 土壤濕度監測一組
 * 抽水馬達一顆
 * （繼電器—依馬達大小決定）
 */
//變數宣告
int sensorValue;

void setup() {
  Serial.begin(115200);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  // 土壤濕度<500開水
  if(sensorValue<500){
    Serial.println("water on");
    digitalWrite(13,HIGH);
  } else if(sensorValue>600){
      Serial.println("water off");
      digitalWrite(13,LOW);
  }
  delay(5000);
}
