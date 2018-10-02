/*
   Matt Calder
   Fur Elise by Ludwig Von Beethoven
*/

int mel_FE[] = {
  N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_GS1, N_B1, N_C2, 0,
  N_E1, N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_C2, N_B1, N_A1, 0,

  N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_GS1, N_B1, N_C2, 0,
  N_E1, N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_C2, N_B1, N_A1, 0,

  N_B1, N_C2, N_D2, N_E2, N_G1, N_F2, N_E2, N_D2, N_F1, N_E2,
  N_D2, N_C2, N_E1, N_D2, N_C2, N_B1, 0,

  N_E1, N_E2, N_E1, N_E2, N_E2, N_E3,

  N_DS2, N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_GS1, N_B1, N_C2, 0,
  N_E1, N_E2, N_DS2, N_E2, N_DS2, N_E2, N_B1, N_D2, N_C2, N_A1, 0,
  N_C1, N_E1, N_A1, N_B1, 0,
  N_E1, N_C2, N_B1, N_A1, 0,

};

float noteD_FE[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 2, 8,

  8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,

  8, 8, 8, 2.5, 8, 8, 8, 2.5, 8, 8,
  8, 2.5, 8, 8, 8, 2.5, 16,

  8, 8, 8, 8, 8, 8,

  8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8,
  8, 8, 8, 4, 8,
  8, 8, 8, 2, 8
};

void FE()
{
  for (int noteNum = 0; noteNum < 147 ; noteNum++)
  {
    float noteDs = (mel_FE[noteNum] / noteD_FE[noteNum]) * 5 ;
    if (noteDs == 0)
    {
      stepper.setSpeed(0);
      delay(200 / noteD_FE[noteNum] * 5);
    }

    stepper.setSpeed(mel_FE[noteNum]);
    stepper.step(noteDs);

    stepper.setSpeed(0);
    delay(20);
  }
}

