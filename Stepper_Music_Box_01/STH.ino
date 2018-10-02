/*
   Matt Calder
   Stairway to Heaven by Led Zeppelin
*/
int mel_STH[] = {
  N_A0, N_C1, N_E1, N_A1, N_B1, N_E1, N_C1, N_B1, //8
  N_C2, N_E1, N_C1, N_C2, N_FS1, N_D1, N_A0, N_FS1, //8
  N_E1, N_C1, N_A0, N_C1, N_E1, N_C1, N_A0, //7
  N_G0, N_A0, N_A0, //3

  N_A0, N_B0, //2
  N_C1, N_E1, N_G1, N_E2, N_FS2, N_D2, N_A1, N_FS2, //8
  N_E2, N_C2, N_A1, N_E2, N_B1, N_A1, N_A0, N_B0, //8
  N_C2, N_G1, N_E1, N_C2, N_G2, N_B1, N_G1, N_G2, //8
  N_G2, N_FS2, N_FS2, N_FS2, // 4

  N_A1, N_B1, //2
  N_C2, N_E2, N_G2, N_E3, N_FS3, N_D3, N_A2, N_FS3, //8
  N_E3, N_C3, N_A2, N_E3, N_E3, N_A2, N_A1, N_B1, //8
  N_C2, N_E2, N_G2, N_C3, N_D2, N_A2, N_D3, N_FS3, //8
  N_G2, N_A2, N_A2 // 3
};

int noteD_STH[] = {
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 8, 8,
  8, 8, 2,

  8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  16, 16, 8, 2,

  8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 2
};

void STH()
{
  for (int noteNum = 0; noteNum < 85 ; noteNum++)
  {
    float noteDs = (mel_STH[noteNum] / noteD_STH[noteNum]) * 12 ;

    stepper.setSpeed(mel_STH[noteNum]);
    stepper.step(noteDs);

    stepper.setSpeed(0);
    delay(20);
  }
}

