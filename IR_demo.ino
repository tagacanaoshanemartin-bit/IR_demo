// GPIO pins
const byte IR = 36;
//const byte DAC_PIN = 25;

// variables
/* int adc_val = 0;      // 3102
float voltage_in = 0; // 2.5V <- result of calculation */
int ir_cnt = 0;
int ir_in = 0;

void setup() {
  // ADC pin
  pinMode(IR, INPUT);
  //analogReadResolution(8); // set res to 8-bit since dacWrite() is only 8-bit

  // DAC pin
  //pinMode(DAC_PIN, OUTPUT);

  Serial.begin(9600); // baud rate, unit is BPS (bit per second)

}

void loop() {
  ir_in = digitalRead(IR);

  if(ir_in == 0) {
    ir_cnt++;
  }

  Serial.printf("Objects Detected: %d\n", ir_cnt);
  //delay(500);

}