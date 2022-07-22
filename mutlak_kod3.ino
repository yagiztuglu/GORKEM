
int tmotor1 = 2;
int tmotor2 = 3;
int tmotor3 = 4;
int tmotor4 = 5;
int tmotor5 = 6;

int irsensorA0 = A0;
int irsensorA1 = A1;
int irsensorA2 = A2;
int irsensorA3 = A3;
int irsensorA4 = A4;


void setup() {
  pinMode(tmotor1, OUTPUT);
  pinMode(tmotor2, OUTPUT);
  pinMode(tmotor3, OUTPUT);
  pinMode(tmotor4, OUTPUT);
  pinMode(tmotor5, OUTPUT);

  pinMode(irsensorA0, INPUT);
  pinMode(irsensorA1, INPUT);
  pinMode(irsensorA2, INPUT);
  pinMode(irsensorA3, INPUT);
  pinMode(irsensorA4, INPUT);
  Serial.begin(9600);
}


void loop() {
  int irdeger0 = analogRead(irsensorA0);
  int irdeger1 = analogRead(irsensorA1);
  int irdeger2 = analogRead(irsensorA2);
  int irdeger3 = analogRead(irsensorA3);
  int irdeger4 = analogRead(irsensorA4);

Serial.print("sensör 1; ");
Serial.println(irdeger0);
Serial.print("sensör 2; ");
Serial.println(irdeger1);


  //birinci sensör
  if (irdeger0 < 100 and irdeger0 >= 0) {
    digitalWrite(tmotor1, HIGH);
    delay(100);
    digitalWrite(tmotor1, LOW);
    delay(100);
  }
  else if (irdeger0 < 200 and irdeger0 >= 100) {
    digitalWrite(tmotor1, HIGH);
    delay(300);
    digitalWrite(tmotor1, LOW);
    delay(300);
  }
  else if (irdeger0 < 300 and irdeger0 >= 200) {
    digitalWrite(tmotor1, HIGH);
    delay(510);
    digitalWrite(tmotor1, LOW);
    delay(500);
  }
  else {
    digitalWrite(tmotor1, LOW);
  }


  // ikinci sensör
  if (irdeger1 < 100 and irdeger1 >= 0) {
    digitalWrite(tmotor2, HIGH);
    delay(100);
    digitalWrite(tmotor2, LOW);
    delay(100);
  }
  else if (irdeger1 < 200 and irdeger1 >= 100) {
    digitalWrite(tmotor2, HIGH);
    delay(300);
    digitalWrite(tmotor2, LOW);
    delay(300);
  }
  else if (irdeger1 < 300 and irdeger1 >= 200) {
    digitalWrite(tmotor1, HIGH);
    delay(510);
    digitalWrite(tmotor1, LOW);
    delay(500);
  }
  else {
    digitalWrite(tmotor2, LOW);
  }


  // üçüncü sensör
  if (irdeger2 < 100 and irdeger2 >= 0) {
    digitalWrite(tmotor3, HIGH);
    delay(100);
    digitalWrite(tmotor3, LOW);
    delay(100);
  }
  else if (irdeger2 < 300 and irdeger2 >= 100) {
    digitalWrite(tmotor3, HIGH);
    delay(300);
    digitalWrite(tmotor3, LOW);
    delay(300);
  }
  else if (irdeger2 < 400 and irdeger2 >= 300) {
    digitalWrite(tmotor3, HIGH);
    delay(510);
    digitalWrite(tmotor3, LOW);
    delay(500);
  }
  else {
    digitalWrite(tmotor3, LOW);
  }


  // dördüncü sensör
  if (irdeger3 < 100 and irdeger3 >= 0) {
    digitalWrite(tmotor4, HIGH);
    delay(100);
    digitalWrite(tmotor4, LOW);
    delay(100);
  }
  else if (irdeger3 < 300 and irdeger3 >= 100) {
    digitalWrite(tmotor4, HIGH);
    delay(300);
    digitalWrite(tmotor4, LOW);
    delay(300);
  }
  else if (irdeger3 < 400 and irdeger3 >= 300) {
    digitalWrite(tmotor4, HIGH);
    delay(510);
    digitalWrite(tmotor4, LOW);
    delay(500);
  }
  else {
    digitalWrite(tmotor4, LOW);
  }


  // beşinci sensör
  if (irdeger4 < 100 and irdeger4 >= 0) {
    digitalWrite(tmotor5, HIGH);
    delay(100);
    digitalWrite(tmotor5, LOW);
    delay(100);
  }
  else if (irdeger4 < 300 and irdeger4 >= 100) {
    digitalWrite(tmotor5, HIGH);
    delay(300);
    digitalWrite(tmotor5, LOW);
    delay(300);
  }
  else if (irdeger4 < 400 and irdeger4 >= 300) {
    digitalWrite(tmotor1, HIGH);
    delay(510);
    digitalWrite(tmotor1, LOW);
    delay(500);
  }
  else {
    digitalWrite(tmotor5, LOW);
  }

}

void yakinlik1 (int zaman) {
  digitalWrite(tmotor1, HIGH);
  delay(zaman);
  digitalWrite(tmotor1, LOW);
  delay(zaman);
}

void yakinlik2 (int zaman) {
  digitalWrite(tmotor2, HIGH);
  delay(zaman);
  digitalWrite(tmotor2, LOW);
  delay(zaman);
}

void yakinlik3 (int zaman) {
  digitalWrite(tmotor3, HIGH);
  delay(zaman);
  digitalWrite(tmotor3, LOW);
  delay(zaman);
}

void yakinlik4 (int zaman) {
  digitalWrite(tmotor4, HIGH);
  delay(zaman);
  digitalWrite(tmotor4, LOW);
  delay(zaman);
}

void yakinlik5 (int zaman) {
  digitalWrite(tmotor5, HIGH);
  delay(zaman);
  digitalWrite(tmotor5, LOW);
  delay(zaman);
}
