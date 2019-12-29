// Full-frame bitmap graphic

// Blinking Eyes
const byte eyes0[5][16] PROGMEM = 
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,0,0,1,0,1,0,0,1,0,0,0,1,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};

const byte eyes1[5][16] PROGMEM =
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};

const byte eyes2[5][16] PROGMEM =
{
  {0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0},
  {1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1},
  {1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1},
  {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1},
  {0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0}
};
const byte eyes3[5][16] PROGMEM =
{
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
  {0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0},
  {0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

// Diamonds
const byte diamonds0[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,0,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,0 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds1[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,0,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,0,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds2[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,0,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,0,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds3[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,0,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,0,0,0,0 }
};

const byte diamonds4[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,0,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,0,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds5[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,0,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,0,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds6[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,0,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,0,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds7[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,0,1,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,0,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds8[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,0,1,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds9[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,0,1,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,0,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds10[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,0,1,0 },
  /*1*/{ 1,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,0,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

const byte diamonds11[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,0,0 },
  /*1*/{ 0,1,1,1,1,1,1,0, 0,1,1,1,1,1,1,1 },
  /*2*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,1,0 },
  /*3*/{ 0,0,1,1,1,0,0,0, 0,0,0,1,1,1,0,0 },
  /*4*/{ 0,0,0,1,0,0,0,0, 0,0,0,0,1,0,0,0 }
};

// Twenty
const byte twenty0[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,0,1,1,1,0,0,0, 0,0,1,1,1,1,0,0 },
  /*1*/{ 0,1,0,0,1,1,0,0, 0,1,1,0,0,1,1,0 },
  /*2*/{ 0,0,0,1,1,0,0,0, 0,1,1,0,0,1,1,0 },
  /*3*/{ 0,0,1,1,0,0,0,0, 0,1,1,0,0,1,1,0 },
  /*4*/{ 0,1,1,1,1,1,0,0, 0,0,1,1,1,1,0,0 }
};

// Twenty
const byte twenty1[5][16] PROGMEM =
{
  //     0 1 2 3 4 5 6 7||7 6 5 4 3 2 1 0
  /*0*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 },
  /*1*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 },
  /*2*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 },
  /*3*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 },
  /*4*/{ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 }
};

const byte * const frameArray[] PROGMEM = {
  eyes0[0], // 0
  eyes1[0],
  eyes2[0],
  eyes3[0], // 3

  diamonds0[0], // 4
  diamonds1[0],
  diamonds2[0],
  diamonds3[0],
  diamonds4[0],
  diamonds5[0],
  diamonds6[0],
  diamonds7[0], // 11
  diamonds8[0],
  diamonds9[0],
  diamonds10[0],
  diamonds11[0], // 15

  twenty0[0], // 16
  twenty1[0] // 17
};
/*
{
{0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
{0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}
};
*/
