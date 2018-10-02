/*
   Matt Calder
   Star Wars Main Theme by John Williams
*/
int mel_SW[] =
{
  N_G1, N_G1, N_G1, N_C2, N_G2, N_F2, N_E2, N_D2, N_C3, N_G2,
  N_F2, N_E2, N_D2, N_C3, N_G2, N_F2, N_E2, N_F2, N_D2,

  N_G1, N_G1, N_G1, N_C2, N_G2, N_F2, N_E2, N_D2, N_C3, N_G2,
  N_F2, N_E2, N_D2, N_C3, N_G2, N_F2, N_E2, N_F2, N_D2
};

float noteD_SW[] =
{
  12, 12, 12, 1.9, 4, 12, 12, 12, 1.9, 4, 12, 12, 12, 1.9, 4, 12, 12, 12, 1,
  12, 12, 12, 1.9, 4, 12, 12, 12, 1.9, 4, 12, 12, 12, 1.9, 4, 12, 12, 12, 1
};

void SW()
{
  for (int noteNum = 0; noteNum < 38; noteNum++)
  {
    float noteDs = (mel_SW[noteNum] / noteD_SW[noteNum]) * 5;

    stepper.setSpeed(mel_SW[noteNum]);
    stepper.step(noteDs);

    stepper.setSpeed(0);
    delay(30);
  }
}

