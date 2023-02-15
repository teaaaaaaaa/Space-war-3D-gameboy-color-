const unsigned char laserSFX[] = {
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x77,0x78,
0x77,0x77,0x77,0x78,0x78,0x78,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x87,0x87,
0x77,0x87,0x87,0x87,0x77,0x78,0x78,0x77,0x88,0x69,0x59,0x85,0xb4,0xa7,0x6b,0x4a,
0x76,0xb4,0xa7,0x5b,0x49,0x85,0xb5,0x89,0x4b,0x66,0xb4,0x98,0x4b,0x66,0xb4,0x99,
0x4b,0x74,0xc5,0x6b,0x48,0xa4,0x99,0x4a,0x84,0xa7,0x5b,0x65,0xb6,0x5b,0x56,0xb5,
0x5b,0x65,0xb7,0x5b,0x84,0xaa,0x39,0xb3,0x8c,0x46,0xc6,0x4a,0xa3,0x8c,0x45,0xd6,
0x3b,0xa3,0x7d,0x55,0xb9,0x45,0xd7,0x1c,0xa3,0x7a,0xa3,0x6e,0x53,0x99,0x86,0x9b,
0x56,0xa7,0x57,0x88,0x55,0xa9,0x47,0xa9,0x75,0x99,0x66,0xaa,0x65,0x8b,0x75,0x8a,
0xa6,0x47,0xa6,0x58,0x98,0x76,0x8c,0x94,0x58,0x88,0x74,0x7c,0x95,0x69,0x89,0x85,
0x7a,0x85,0x47,0x99,0x96,0x57,0xaa,0x76,0x57,0x9a,0x76,0x78,0x99,0x75,0x68,0x86,
0x66,0x78,0xab,0x95,0x57,0x88,0x9a,0x85,0x58,0x97,0x68,0x87,0x68,0xa9,0x76,0x77,
0x77,0x89,0x76,0x67,0x77,0x78,0x98,0x77,0x89,0x99,0x98,0x65,0x57,0x88,0x89,0x98,
0x76,0x67,0x88,0x76,0x67,0x99,0x98,0x88,0x76,0x56,0x78,0x98,0x88,0x89,0x86,0x66,
0x78,0x98,0x87,0x77,0x77,0x77,0x78,0x89,0x88,0x87,0x77,0x77,0x88,0x89,0x88,0x87,
0x66,0x66,0x76,0x67,0x77,0x88,0x99,0x98,0x87,0x77,0x77,0x77,0x77,0x77,0x88,0x87,
0x77,0x77,0x88,0x88,0x88,0x76,0x66,0x77,0x88,0x88,0x88,0x88,0x88,0x87,0x77,0x77,
0x77,0x77,0x77,0x78,0x89,0x98,0x88,0x87,0x76,0x76,0x66,0x67,0x77,0x88,0x88,0x88,
0x89,0x89,0x98,0x98,0x87,0x77,0x66,0x66,0x66,0x67,0x77,0x78,0x78,0x88,0x98,0x98,
0x89,0x88,0x88,0x87,0x87,0x87,0x78,0x77,0x87,0x77,0x77,0x77,0x76,0x77,0x76,0x77,
0x68,0x76,0x78,0x77,0x88,0x99,0x99,0x99,0x99,0x98,0x99,0x88,0x88,0x88,0x88,0x88,
0x88,0x88,0x88,0x87,0x77,0x77,0x66,0x66,0x65,0x55,0x55,0x56,0x65,0x66,0x66,0x67,
0x77,0x87,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
0x88,0x88,0x88,0x88,0x88,0x88,0x99,0x89,0x99,0x89,0x98,0x89,0x88,0x89,0x88,0x98,
0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x87,0x78,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x67,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x88,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x78,0x77,0x77,0x87,0x87,0x88,0x78,0x78,0x87,0x77,0x88,0x87,0x88,0x78,0x87,
0x87,0x78,0x87,0x88,0x77,0x87,0x78,0x87,0x78,0x77,0x78,0x77,0x78,0x77,0x78,0x77,
0x78,0x87,0x77,0x78,0x77,0x88,0x77,0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
0x77,0x78,0x88,0x87,0x77,0x77,0x78,0x87,0x87,0x87,0x77,0x78,0x88,0x87,0x88,0x88,
0x87,0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x78,0x88,0x88,0x88,0x88,0x87,0x88,
0x77,0x77,0x78,0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x87,0x87,0x87,0x87,
0x88,0x78,0x78,0x78,0x78,0x88,0x97,0x97,0x88,0x78,0x78,0x86,0x86,0x78,0x67,0x76,
0x77,0x68,0x86,0x78,0x67,0x87,0x68,0x87,0x79,0x87,0x89,0x87,0x89,0x87,0x78,0x87,
0x78,0x98,0x77,0x88,0x86,0x78,0x98,0x76,0x78,0x88,0x76,0x77,0x88,0x87,0x77,0x78,
0x77,0x77,0x76,0x77,0x88,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x77,0x77,0x77,0x77,
0x87,0x78,0x87,0x77,0x77,0x77,0x87,0x88,0x87,0x77,0x77,0x67,0x87,0x77,0x78,0x88,
0x88,0x88,0x88,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x88,0x88,0x88,0x88,
0x88,0x87,0x87,0x77,0x67,0x67,0x76,0x77,0x77,0x77,0x67,0x77,0x88,0x78,0x97,0x79,
0x87,0x88,0x88,0x99,0x99,0x99,0x99,0x88,0x89,0x98,0x88,0x88,0x88,0x88,0x87,0x78,
0x88,0x87,0x77,0x88,0x87,0x67,0x77,0x76,0x66,0x67,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x76,0x67,0x76,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x88,0x87,0x77,0x78,0x87,0x77,0x77,0x77,
0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x78,0x78,0x77,0x86,0x87,0x78,0x77,
0x77,0x88,0x78,0x87,0x88,0x78,0x97,0x79,0x87,0x89,0x88,0x88,0x88,0x89,0x99,0x88,
0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x87,
0x77,0x77,0x87,0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,
0x88,0x88,0x78,0x87,0x87,0x88,0x88,0x88,0x78,0x87,0x88,0x88,0x88,0x88,0x88,0x88,
0x88,0x88,0x88,0x88,0x87,0x78,0x88,0x78,0x88,0x87,0x77,0x88,0x77,0x88,0x88,0x87,
0x88,0x78,0x87,0x78,0x77,0x87,0x77,0x87,0x78,0x77,0x77,0x77,0x87,0x77,0x77,0x77,
0x87,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x77,0x77,0x77,0x77,0x88,
0x77,0x78,0x87,0x77,0x88,0x87,0x77,0x88,0x77,0x78,0x88,0x87,0x77,0x88,0x88,0x77,
0x88,0x88,0x77,0x78,0x88,0x87,0x77,0x78,0x88,0x87,0x78,0x87,0x88,0x88,0x87,0x78,
0x88,0x88,0x88,0x88,0x87,0x78,0x88,0x88,0x88,0x87,0x78,0x88,0x88,0x88,0x88,0x87,
0x88,0x88,0x88,0x77,0x78,0x88,0x88,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x78,
0x87,0x77,0x77,0x77,0x77,0x78,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x78,0x78,0x77,0x87,0x77,0x78,0x88,0x88,0x88,0x77,0x78,0x88,0x88,0x88,0x88,
0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x87,0x78,0x88,0x88,0x78,0x88,0x88,
0x78,0x88,0x87,0x77,0x77,0x78,0x88,0x88,0x77,0x77,0x88,0x88,0x88,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x78,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x87,0x77,0x77,
0x77,0x77,0x77,0x78,0x88,0x88,0x88,0x88,0x88,0x78,0x87,0x77,0x87,0x87,0x77,0x78,
0x78,0x77,0x87,0x87,0x78,0x77,0x87,0x88,0x88,0x88,0x78,0x87,0x78,0x87,0x88,0x77,
0x88,0x77,0x88,0x87,0x78,0x87,0x77,0x88,0x87,0x77,0x88,0x77,0x77,0x88,0x87,0x77,
0x77,0x77,0x77,0x77,0x78,0x88,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x77,0x87,0x77,
0x77,0x78,0x88,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x78,0x88,0x78,
0x88,0x77,0x77,0x77,0x77,0x77,0x88,0x77,0x78,0x77,0x88,0x87,0x88,0x88,0x88,0x87,
0x87,0x78,0x78,0x88,0x88,0x77,0x77,0x77,0x77,0x78,0x87,0x77,0x87,0x77,0x87,0x77,
0x78,0x87,0x78,0x88,0x77,0x78,0x87,0x77,0x77,0x88,0x77,0x78,0x88,0x88,0x88,0x88,
0x88,0x88,0x88,0x88,0x88,0x78,0x88,0x88,0x88,0x88,0x77,0x87,0x78,0x88,0x88,0x88,
0x88,0x88,0x88,0x88,0x78,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x87,0x88,0x77,
0x77,0x77,0x77,0x77,0x88,0x88,0x87,0x77,0x78,0x88,0x87,0x78,0x77,0x87,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x78,0x87,0x77,0x77,
0x77,0x77,0x77,0x77,0x87,0x78,0x88,0x78,0x78,0x77,0x78,0x88,0x88,0x87,0x87,0x77,
0x77,0x77,0x77,0x78,0x77,0x77,0x78,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x88,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x87,0x77,0x88,0x87,
0x88,0x77,0x88,0x87,0x78,0x78,0x77,0x78,0x77,0x77,0x77,0x77,0x78,0x87,0x77,0x87,
0x77,0x88,0x87,0x78,0x88,0x77,0x77,0x88,0x77,0x78,0x88,0x77,0x77,0x88,0x87,0x77,
0x88,0x88,0x77,0x78,0x88,0x87,0x78,0x88,0x88,0x77,0x78,0x88,0x77,0x77,0x88,0x88,
0x88,0x77,0x78,0x88,0x88,0x77,0x77,0x78,0x88,0x87,0x77,0x78,0x88,0x88,0x87,0x78,
0x88,0x88,0x88,0x77,0x77,0x77,0x78,0x78,0x77,0x77,0x77,0x77,0x77,0x88,0x77,0x87,
0x77,0x77,0x77,0x88,0x88,0x78,0x88,0x87,0x87,0x78,0x88,0x88,0x88,0x87,0x88,0x88,
0x87,0x78,0x88,0x88,0x88,0x77,0x77,0x88,0x77,0x88,0x87,0x77,0x77,0x77,0x88,0x88,
0x77,0x77,0x77,0x78,0x88,0x88,0x88,0x87,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x77,0x78,0x78,0x87,0x88,
0x78,0x77,0x77,0x78,0x77,0x78,0x77,0x87,0x77,0x78,0x77,0x88,0x87,0x78,0x88,0x77,
0x88,0x77,0x77,0x88,0x87,0x77,0x77,0x77,0x78,0x77,0x78,0x88,0x88,0x77,0x77,0x77,
0x77,0x77,0x77,0x88,0x77,0x87,0x77,0x77,0x77,0x77,0x87,0x78,0x87,0x88,0x77,0x77,
0x77,0x77,0x78,0x88,0x88,0x87,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x88,0x88,0x78,0x87,0x78,0x77,0x88,0x78,0x87,0x78,0x87,0x78,0x87,0x78,0x87,
0x77,0x88,0x87,0x77,0x88,0x77,0x77,0x88,0x87,0x77,0x77,0x77,0x77,0x77,0x78,0x88,
0x77,0x77,0x77,0x77,0x78,0x88,0x77,0x77,0x78,0x88,0x88,0x88,0x87,0x77,0x78,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x78,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x88,0x88,0x87,0x77,0x87,0x77,0x88,0x88,0x88,0x87,0x88,0x88,0x88,0x78,
0x88,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x78,0x88,0x77,0x87,
0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x77,
0x87,0x77,0x88,0x77,0x88,0x78,0x87,0x88,0x88,0x87,0x77,0x77,0x87,0x78,0x87,0x77,
0x87,0x77,0x88,0x77,0x77,0x77,0x87,0x77,0x77,0x87,0x77,0x77,0x87,0x77,0x77,0x77,
0x77,0x78,0x88,0x88,0x87,0x77,0x77,0x77,0x77,0x77,0x87,0x88,0x88,0x77,0x88,0x88,
0x77,0x77,0x77,0x77,0x78,0x88,0x78,0x88,0x78,0x87,0x77,0x88,0x77,0x77,0x77,0x78,
0x87,0x77,0x77,0x77,0x77,0x78,0x78,0x77,0x87,0x78,0x77,0x77,0x77,0x87,0x77,0x87,
0x77,0x88,0x87,0x78,0x77,0x77,0x77,0x77,0x77,0x87,0x87,0x87,0x87,0x87,0x77,0x77,
0x77,0x87,0x77,0x77,0x88,0x77,0x87,0x88,0x77,0x77,0x77,0x88,0x88,0x87,0x77,0x77,
0x77,0x77,0x77,0x77,0x87,0x88,0x88,0x88,0x88,0x87,0x77,0x77,0x77,0x77,0x78,0x77,
0x77,0x87,0x87,0x78,0x77,0x87,0x78,0x77,0x87,0x88,0x77,0x88,0x78,0x88,0x88,0x78,
0x77,0x77,0x78,0x87,0x88,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x87,0x88,0x77,0x77,0x87,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x87,0x78,0x77,0x87,0x78,0x87,0x88,0x78,0x88,0x88,0x88,0x88,0x78,0x78,0x88,0x87,
0x88,0x87,0x78,0x88,0x87,0x78,0x88,0x87,0x88,0x88,0x77,0x77,0x87,0x77,0x88,0x77,
0x77,0x78,0x77,0x77,0x88,0x87,0x77,0x77,0x88,0x77,0x77,0x88,0x77,0x77,0x88,0x87,
0x77,0x77,0x77,0x77,0x77,0x87,0x87,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x78,0x77,
0x78,0x78,0x87,0x77,0x77,0x78,0x87,0x88,0x77,0x78,0x88,0x87,0x77,0x77,0x77,0x87,
0x77,0x77,0x77,0x88,0x88,0x77,0x77,0x77,0x77,0x77,0x88,0x77,0x77,0x77,0x77,0x78,
0x78,0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x78,0x88,0x77,0x77,0x77,0x77,
0x78,0x87,0x88,0x88,0x77,0x77,0x77,0x77,0x78,0x78,0x78,0x87,0x77,0x77,0x77,0x77,
0x77,0x77,0x88,0x87,0x78,0x77,0x78,0x87,0x77,0x78,0x78,0x77,0x87,0x88,0x77,0x77,
0x78,0x87,0x87,0x77,0x78,0x78,0x78,0x78,0x78,0x77,0x77,0x78,0x78,0x78,0x78,0x88,
0x77,0x77,0x77,0x77,0x78,0x78,0x78,0x77,0x87,0x78,0x78,0x78,0x87,0x78,0x77,0x77,
0x77,0x77,0x77,0x87,0x77,0x77,0x87,0x78,0x78,0x78,0x77,0x77,0x77,0x87,0x77,0x78,
0x77,0x88,0x88,0x87,0x78,0x77,0x77,0x78,0x78,0x77,0x77,0x77,0x78,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x78,0x77,0x78,0x87,0x77,0x77,0x77,0x77,0x87,0x77,0x78,0x77,
0x77,0x87,0x77,0x77,0x87,0x87,0x78,0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x78,
0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x88,0x77,0x78,0x77,
0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,
0x78,0x77,0x88,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x87,0x77,0x77,0x77,0x87,
0x77,0x77,0x88,0x87,0x87,0x77,0x77,0x77,0x87,0x78,0x78,0x78,0x78,0x77,0x87,0x77,
0x78,0x77,0x77,0x87,0x77,0x77,0x87,0x87,0x77,0x78,0x78,0x87,0x77,0x77,0x78,0x78,
0x77,0x87,0x77,0x77,0x77,0x77,0x87,0x88,0x87,0x87,0x77,0x77,0x77,0x77,0x88,0x78,
0x78,0x77,0x77,0x77,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x77,
0x78,0x78,0x77,0x78,0x77,0x78,0x77,0x78,0x77,0x77,0x78,0x77,0x77,0x87,0x77,0x77,
0x77,0x77,0x87,0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x78,0x77,0x77,
0x77,0x77,0x78,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x87,0x77,0x77,0x77,0x78,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x77,
0x87,0x87,0x87,0x87,0x87,0x78,0x77,0x77,0x77,0x87,0x87,0x87,0x87,0x87,0x88,0x78,
0x77,0x77,0x77,0x78,0x78,0x77,0x77,0x77,0x87,0x87,0x87,0x87,0x77,0x77,0x77,0x78,
0x78,0x77,0x77,0x87,0x77,0x78,0x78,0x77,0x77,0x87,0x78,0x77,0x87,0x78,0x77,0x77,
0x77,0x77,0x77,0x77,0x78,0x77,0x77,0x78,0x77,0x77,0x78,0x87,0x77,0x77,0x78,0x87,
0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x78,0x78,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x88,0x78,0x78,0x77,0x77,0x78,0x77,
0x77,0x78,0x77,0x77,0x78,0x77,0x88,0x77,0x87,0x77,0x78,0x77,0x77,0x78,0x77,0x77,
0x77,0x77,0x87,0x87,0x87,0x77,0x77,0x78,0x78,0x78,0x87,0x77,0x78,0x77,0x87,0x87,
0x87,0x78,0x77,0x77,0x77,0x77,0x78,0x78,0x78,0x78,0x78,0x77,0x78,0x77,0x77,0x77,
0x77,0x77,0x77,0x88,0x77,0x78,0x78,0x87,0x77,0x87,0x77,0x87,0x87,0x87,0x87,0x78,
0x78,0x78,0x78,0x78,0x78,0x78,0x77,0x77,0x78,0x78,0x78,0x78,0x77,0x87,0x77,0x77,
0x77,0x77,0x77,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x77,0x77,0x77,0x77,0x77,
0x87,0x78,0x78,0x78,0x77,0x87,0x77,0x87,0x77,0x77,0x77,0x77,0x77,0x87,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x78,0x87,0x87,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x87,0x87,0x87,0x87,0x77,0x77,0x77,0x87,0x88,
0x78,0x78,0x88,0x88,0x87,0x87,0x87,0x87,0x87,0x77,0x87,0x87,0x77,0x77,0x77,0x78,
0x78,0x78,0x78,0x78,0x78,0x78,0x77,0x87,0x78,0x78,0x78,0x78,0x78,0x77,0x87,0x87,
0x87,0x77,0x78,0x77,0x77,0x78,0x87,0x87,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x77,
0x78,0x77,0x77,0x77,0x87,0x77,0x77,0x78,0x77,0x77,0x77,0x77,0x88,0x77,0x77,0x78,
0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x78,0x77,0x77,0x77,0x77,
0x87,0x77,0x77,0x78,0x78,0x77,0x77,0x77,0x87,0x87,0x77,0x77,0x87,0x87,0x87,0x77,
0x77,0x77,0x78,0x77,0x87,0x77,0x78,0x78,0x77,0x77,0x77,0x77,0x78,0x78,0x77,0x77,
0x77,0x77,0x87,0x87,0x87,0x77,0x77,0x78,0x78,0x78,0x77,0x77,0x77,0x87,0x87,0x87,
0x77,0x77,0x77,0x77,0x77,0x78,0x87,0x87,0x77,0x77,0x77,0x77,0x87,0x87,0x87,0x77,
0x77,0x77,0x87,0x78,0x77,0x87,0x77,0x77,0x77,0x78,0x77,0x87,0x87,0x77,0x77,0x77,
0x77,0x77,0x78,0x78,0x77,0x87,0x87,0x77,0x77,0x77,0x77,0x77,0x78,0x78,0x77,0x87,
0x87,0x77,0x77,0x77,0x77,0x77,0x78,0x77,0x78,0x78,0x77,0x77,0x77,0x77,0x78,0x77,
0x77,0x77,0x77,0x77,0x87,0x87,0x77,0x87,0x77,0x77,0x77,0x87,0x77,0x78,0x77,0x77,
0x87,0x87,0x77,0x78,0x78,0x87,0x77,0x77,0x87,0x87,0x87,0x78,0x78,0x87,0x77,0x77,
0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x87,0x77,0x77,0x77,0x78,0x87,0x87,0x77,0x77,
};