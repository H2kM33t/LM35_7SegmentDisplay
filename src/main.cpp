#include <Arduino.h>

// Tens Digit 7 Segment Display
int A_1 = A3;
int B_1 = A4;
int C_1 = A5;
int D_1 = 2;
int E_1 = 3;
int F_1 = 4;
int G_1 = 5;

// Ones Digit 7 Segment Display
int A_2 = 7;
int B_2 = 8;
int C_2 = 9;
int D_2 = 10;
int E_2 = 11;
int F_2 = 12;
int G_2 = 13;

void setup()
{
    Serial.begin(9600);

    // Setting the Analogue Due to Shortage of Pins in Digital GPIO
    pinMode(A_1, OUTPUT);
    pinMode(B_1, OUTPUT);
    pinMode(C_1, OUTPUT);
    pinMode(D_1, OUTPUT);
    pinMode(E_1, OUTPUT);
    pinMode(F_1, OUTPUT);
    pinMode(G_1, OUTPUT);

    pinMode(A_2, OUTPUT);
    pinMode(B_2, OUTPUT);
    pinMode(C_2, OUTPUT);
    pinMode(D_2, OUTPUT);
    pinMode(E_2, OUTPUT);
    pinMode(F_2, OUTPUT);
    pinMode(G_2, OUTPUT);
}

void loop()
{
    // Temperature will assigned to this Variable
    int num;
    int tens_digit;
    int ones_digit;

    // Read the Input on Analog Pin 0:
    int sensorValue = analogRead(A0);

    // Convert the Analog Reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    float voltage = sensorValue * (5.0 / 1023.0);
    float temperature = voltage * 100;

    // Print out the Value you read:
    Serial.println("Temperature : ");
    Serial.println(temperature);

    num = temperature;
    tens_digit = num / 10;
    ones_digit = num % 10;

    Serial.println(tens_digit);
    Serial.println(ones_digit);

    // 7 Segment Display for the Tens Digit
    // These are Active Low i.e due to Common Anode
    if (tens_digit == 0)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, LOW);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, HIGH);
    }

    else if (tens_digit == 1)
    {
        digitalWrite(A_1, HIGH);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, HIGH);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, HIGH);
        digitalWrite(G_1, HIGH);
    }

    else if (tens_digit == 2)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, HIGH);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, LOW);
        digitalWrite(F_1, HIGH);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 3)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, HIGH);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 4)
    {
        digitalWrite(A_1, HIGH);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, HIGH);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 5)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, HIGH);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 6)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, HIGH);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, LOW);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 7)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, HIGH);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, HIGH);
        digitalWrite(G_1, HIGH);
    }

    else if (tens_digit == 8)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, LOW);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, LOW);
    }

    else if (tens_digit == 9)
    {
        digitalWrite(A_1, LOW);
        digitalWrite(B_1, LOW);
        digitalWrite(C_1, LOW);
        digitalWrite(D_1, LOW);
        digitalWrite(E_1, HIGH);
        digitalWrite(F_1, LOW);
        digitalWrite(G_1, LOW);
    }

    // 7 Segment Display for the ones Digit
    if (ones_digit == 0)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, LOW);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, HIGH);
    }

    else if (ones_digit == 1)
    {
        digitalWrite(A_2, HIGH);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, HIGH);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, HIGH);
        digitalWrite(G_2, HIGH);
    }

    else if (ones_digit == 2)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, HIGH);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, LOW);
        digitalWrite(F_2, HIGH);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 3)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, HIGH);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 4)
    {
        digitalWrite(A_2, HIGH);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, HIGH);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 5)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, HIGH);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 6)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, HIGH);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, LOW);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 7)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, HIGH);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, HIGH);
        digitalWrite(G_2, HIGH);
    }

    else if (ones_digit == 8)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, LOW);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, LOW);
    }

    else if (ones_digit == 9)
    {
        digitalWrite(A_2, LOW);
        digitalWrite(B_2, LOW);
        digitalWrite(C_2, LOW);
        digitalWrite(D_2, LOW);
        digitalWrite(E_2, HIGH);
        digitalWrite(F_2, LOW);
        digitalWrite(G_2, LOW);
    }

    delay(1500);
}
