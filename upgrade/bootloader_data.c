// This file contains the bootloader data itself and the address to install the bootloader at
// Use generate-data.rb with ruby 1.9 to generate these values from a hex file
// Generated from ../firmware/releases/micronucleus-1.04.hex at 2012-10-05 19:54:53 +1000

uint16_t bootloader_data[1037] PROGMEM = {
0xc022, 0xc040, 0xc06c, 0xc03e, 0xc03d, 0xc03c, 0xc03b, 0xc03a, 0xc039, 0xc038, 0xc037, 0xc036, 0xc035, 0xc034, 0xc033, 0x0304, 0x0409, 0x0112, 0x0110, 0x00ff, 0x0800, 0x16d0, 0x0753, 0x0104, 0x0000, 0x0100, 0x0209, 0x0012, 0x0101, 0x8000, 0x0932, 0x0004, 0x0000, 0x0000, 0x0000, 0x2411, 0xbe1f, 0xe5cf, 0xe0d2, 0xbfde, 0xbfcd, 0xeb00, 0x930f, 0xe007, 0x930f, 0xe010, 0xe6a0, 0xe0b0, 0xede4, 0xe1ff, 0xc002, 0x9005, 0x920d, 0x36a6, 0x07b1, 0xf7d9, 0xe010, 0xe6a6, 0xe0b0, 0xc001, 0x921d, 0x39ac, 0x07b1, 0xf7e1, 0xd1df, 0xc3c6, 0xcfbd, 0x2fa8, 0x2fb9, 0xe080, 0xe090, 0xe041, 0xea50, 0x9560, 0xe030, 0xc009, 0x912d, 0x2782, 0x9597, 0x9587, 0xf010, 0x2784, 0x2795, 0x5e30, 0xf3c8, 0x5f6f, 0xf3a8, 0x9508, 0xdfea, 0x938d, 0x939d, 0x9508, 0xe0a6, 0x2788, 0x2799, 0x95aa, 0xf069, 0x9701, 0xf3e1, 0x99b3, 0xcffc, 0x9bb3, 0xcffe, 0xe081, 0x2799, 0xb3a6, 0x9601, 0xf011, 0x71a8, 0xf7d9, 0x9508, 0x93cf, 0xb7cf, 0x93cf, 0x91c0, 0x025f, 0x3bc0, 0xf421, 0x91c0, 0x025e, 0x30c7, 0xf021, 0x91cf, 0xbfcf, 0x91cf, 0xcf81, 0x27cc, 0x95c3, 0x9bb3, 0xf7e9, 0x9bb3, 0xc00b, 0x9bb3, 0xc009, 0x9bb3, 0xc007, 0x9bb3, 0xc005, 0x9bb3, 0xc003, 0x9bb3, 0xc001, 0xc0d3, 0x920f, 0x93df, 0x91c0, 0x007f, 0x27dd, 0x57ca, 0x4fdf, 0x2e01, 0x9bb3, 0xc003, 0x91df, 0x900f, 0xcfe6, 0x932f, 0x930f, 0x931f, 0x934f, 0xef2f, 0x6f4f, 0xb306, 0xfb03, 0xf920, 0x935f, 0x933f, 0xe050, 0xe03b, 0xc065, 0xb316, 0x2601, 0x2950, 0xfd53, 0x95c8, 0xb356, 0x2701, 0xfb03, 0xf925, 0x732f, 0xb306, 0xf0b1, 0x2750, 0x2710, 0xfb13, 0xf926, 0xb206, 0x3022, 0xf0f0, 0xc000, 0xb316, 0x2701, 0xfb03, 0xf927, 0x2601, 0x2950, 0xb206, 0x3024, 0xf5e8, 0x774f, 0x6820, 0xb316, 0x0000, 0xcff6, 0x2750, 0x7d4f, 0x6220, 0xb206, 0x2f10, 0x0000, 0xc000, 0xb306, 0x2600, 0x2950, 0x2710, 0xfb13, 0xf926, 0xb206, 0xcfe2, 0x7b4f, 0xb306, 0x6420, 0xc000, 0xcfda, 0x2601, 0x2950, 0x7118, 0xb206, 0xf169, 0x7f4e, 0x6021, 0x2f01, 0xb316, 0xc028, 0x2600, 0x2950, 0x7f4d, 0xb206, 0x6022, 0x2f10, 0xc029, 0x2601, 0x2950, 0x7f4b, 0xb206, 0x6024, 0x2f01, 0xc02d, 0xb316, 0x2601, 0x2950, 0x7f47, 0x6028, 0x0000, 0xb206, 0xc02e, 0x7e4f, 0xb306, 0x6120, 0xc030, 0x2742, 0xb306, 0x9349, 0x2600, 0x2950, 0x2710, 0xb206, 0xef4f, 0xfb13, 0xf920, 0x7f29, 0xb316, 0xf279, 0x7118, 0xf159, 0x2601, 0x2950, 0xb206, 0x2701, 0xfb03, 0xf921, 0x7f23, 0xb306, 0xf271, 0x2600, 0x2950, 0x5031, 0xf0d0, 0xb206, 0x2710, 0xfb13, 0xf922, 0x7e27, 0xb316, 0xf251, 0x2601, 0x2950, 0x2701, 0xfb03, 0xb206, 0xf923, 0x7c2f, 0xf249, 0x0000, 0xb306, 0x2710, 0xfb13, 0xf924, 0x2600, 0x2950, 0xb206, 0x792f, 0xf239, 0xcf70, 0xe210, 0xbf1a, 0x2700, 0xc017, 0x503b, 0x9531, 0x1bc3, 0x40d0, 0xe210, 0xbf1a, 0x8108, 0x3c03, 0xf0f9, 0x340b, 0xf0e9, 0x9120, 0x007d, 0x8119, 0x0f11, 0x1312, 0xcfed, 0x3609, 0xf151, 0x320d, 0xf011, 0x3e01, 0xf739, 0x9300, 0x0084, 0x913f, 0x915f, 0x914f, 0x911f, 0x910f, 0x912f, 0x91df, 0x900f, 0xb7ca, 0xfdc5, 0xcf1d, 0x91cf, 0xbfcf, 0x91cf, 0x9518, 0x9120, 0x0084, 0x2322, 0xf369, 0x9110, 0x0082, 0x2311, 0xf521, 0x3034, 0xf122, 0x9330, 0x0082, 0x9320, 0x007e, 0x9110, 0x007f, 0xe03b, 0x1b31, 0x9330, 0x007f, 0xc019, 0x9100, 0x0082, 0x3001, 0xf49c, 0xe50a, 0x9130, 0x0060, 0xfd34, 0xc011, 0x9300, 0x0060, 0xe7c2, 0xe0d0, 0xc010, 0x2705, 0xe010, 0xc000, 0xc021, 0x2705, 0xe010, 0x95c8, 0xbb08, 0xc014, 0xe53a, 0xc001, 0xed32, 0x2e03, 0xe0c0, 0xe0d0, 0xe032, 0xb317, 0x6118, 0x9ac3, 0xb308, 0xbb17, 0xe158, 0xe820, 0xef4f, 0xff20, 0x2705, 0xbb08, 0x9527, 0x9517, 0x3f1c, 0xf728, 0x0000, 0x5245, 0xf7b0, 0xff20, 0x2705, 0x9527, 0xbb08, 0x9517, 0x3f1c, 0xf6b8, 0x9129, 0x953a, 0xf761, 0x7e07, 0x9110, 0x0083, 0x0f11, 0xbb08, 0x50c2, 0x40d0, 0xf011, 0x9310, 0x007d, 0xe210, 0xbf1a, 0x6008, 0xb317, 0x7e17, 0x2f40, 0x7e47, 0xe054, 0x955a, 0xf7f1, 0xbb08, 0xbb17, 0xbb48, 0xcf8a, 0xe081, 0x9380, 0x0069, 0x94f8, 0x91e0, 0x0070, 0x91f0, 0x0071, 0x9732, 0xe085, 0x9380, 0x0057, 0x95e8, 0xb607, 0xfc00, 0xcffd, 0x9478, 0x9508, 0x019c, 0x91e0, 0x0070, 0x91f0, 0x0071, 0x9730, 0xf149, 0x30e4, 0x05f1, 0xf0b1, 0xe187, 0x3bec, 0x07f8, 0xf439, 0x9120, 0x006c, 0x9130, 0x006d, 0x5d2e, 0x4f3b, 0xc00d, 0xe187, 0x3bee, 0x07f8, 0xf449, 0x9120, 0x006e, 0x9130, 0x006f, 0x5d2d, 0x4f3b, 0xc002, 0xed2f, 0xec3b, 0x94f8, 0xe081, 0x0109, 0x9380, 0x0057, 0x95e8, 0x2411, 0x9478, 0x9632, 0x93f0, 0x0071, 0x93e0, 0x0070, 0x9508, 0xe181, 0x9380, 0x0057, 0x95e8, 0xcfeb, 0xef8f, 0xef9f, 0xdfc8, 0x9180, 0x0070, 0x9190, 0x0071, 0x738f, 0x7090, 0x2b89, 0xf7a9, 0xcfad, 0xe188, 0xb60f, 0x94f8, 0xbd81, 0xbc11, 0xbe0f, 0xe0e0, 0xe0f0, 0x9185, 0x9194, 0x5d8f, 0x4c9b, 0xf439, 0xe0e4, 0xe0f0, 0x9185, 0x9194, 0x5d8f, 0x4c9b, 0xf009, 0xdfdf, 0x9210, 0x0071, 0x9210, 0x0070, 0x9aac, 0xb78b, 0x6280, 0xbf8b, 0x9abb, 0xe888, 0xe193, 0xe9ec, 0xe0f1, 0x9731, 0xf7f1, 0x9701, 0xf7d1, 0x98bb, 0x9478, 0x9110, 0x0082, 0x5013, 0xfd17, 0xc0d4, 0x9180, 0x007f, 0xe0cc, 0xe0d0, 0x1bc8, 0x09d1, 0x57ca, 0x4fdf, 0x9180, 0x007e, 0x328d, 0xf009, 0xc091, 0x3018, 0xf009, 0xc0c2, 0xec83, 0x9380, 0x0072, 0xe58a, 0x9380, 0x0060, 0x9210, 0x006b, 0x8128, 0x2f82, 0x7680, 0x8199, 0x2388, 0xf129, 0x9210, 0x0067, 0x9210, 0x0066, 0x2399, 0xf441, 0xe682, 0xe090, 0x9390, 0x0081, 0x9380, 0x0080, 0xe024, 0xc068, 0x3091, 0xf451, 0x818c, 0x819d, 0x9390, 0x0071, 0x9380, 0x0070, 0xfd27, 0xc059, 0xef9f, 0xc058, 0x9180, 0x0068, 0x3092, 0xf411, 0x6081, 0xc001, 0x6084, 0x9380, 0x0068, 0xe020, 0xc051, 0x818a, 0x9210, 0x007b, 0x2399, 0xf431, 0x9210, 0x007c, 0xe78b, 0xe090, 0xe022, 0xc03c, 0x3095, 0xf419, 0x9380, 0x0083, 0xc034, 0x3096, 0xf511, 0x818b, 0x3081, 0xf419, 0xee82, 0xe197, 0xc004, 0x3082, 0xf441, 0xef84, 0xe197, 0x9390, 0x0081, 0x9380, 0x0080, 0xe122, 0xc00e, 0x3083, 0xf459, 0x818a, 0x2388, 0xf441, 0xed8e, 0xe197, 0x9390, 0x0081, 0x9380, 0x0080, 0xe024, 0xc001, 0xe020, 0xe480, 0x9380, 0x006b, 0xc01d, 0x3098, 0xf419, 0xe885, 0xe090, 0xc009, 0x3099, 0xf419, 0x9380, 0x0085, 0xc006, 0x309a, 0xf421, 0xe78b, 0xe090, 0xe021, 0xc003, 0xe78b, 0xe090, 0xe020, 0x9390, 0x0081, 0x9380, 0x0080, 0xc005, 0x819e, 0xe880, 0x9380, 0x006b, 0xc007, 0x818f, 0x2388, 0xf419, 0x819e, 0x1792, 0xf008, 0x2f92, 0x9390, 0x0061, 0xc034, 0x9180, 0x006b, 0xff87, 0xc030, 0x9180, 0x0070, 0x9190, 0x0071, 0x9700, 0xf439, 0x8188, 0x8199, 0x9390, 0x006d, 0x9380, 0x006c, 0xc00d, 0x3084, 0x0591, 0xf439, 0x8188, 0x8199, 0x9390, 0x006f, 0x9380, 0x006e, 0xc003, 0x5c80, 0x4197, 0xf438, 0x8188, 0x8199, 0xded3, 0x5012, 0xf011, 0x9622, 0xcfdf, 0x9180, 0x0070, 0x9190, 0x0071, 0x738f, 0x7090, 0x2b89, 0xf439, 0x9180, 0x0068, 0x6082, 0x9380, 0x0068, 0x9210, 0x0061, 0x9210, 0x0082, 0x9180, 0x0060, 0xff84, 0xc03c, 0x9180, 0x0061, 0x3f8f, 0xf1c1, 0x2f18, 0x3089, 0xf008, 0xe018, 0x1b81, 0x9380, 0x0061, 0x9180, 0x0072, 0xe898, 0x2789, 0x9380, 0x0072, 0x2311, 0xf0e1, 0x91e0, 0x0080, 0x91f0, 0x0081, 0x9180, 0x006b, 0xff86, 0xc009, 0x2f91, 0xe7a3, 0xe0b0, 0x9184, 0x938d, 0x9631, 0x5091, 0xf7d9, 0xc007, 0x2f91, 0xe7a3, 0xe0b0, 0x9181, 0x938d, 0x5091, 0xf7e1, 0x93f0, 0x0081, 0x93e0, 0x0080, 0xe783, 0xe090, 0x2f61, 0xdd00, 0x2f61, 0x5f6c, 0x306c, 0xf019, 0xef8f, 0x9380, 0x0061, 0x9360, 0x0060, 0xe194, 0xb386, 0x7188, 0xf431, 0x5091, 0xf7d9, 0x9210, 0x0083, 0x9210, 0x007d, 0xe010, 0x2399, 0xf409, 0xe011, 0x9180, 0x006a, 0x1781, 0xf039, 0x2311, 0xf419, 0x94f8, 0xd052, 0x9478, 0x9310, 0x006a, 0xe98c, 0xe091, 0x9701, 0xf7f1, 0x9180, 0x0066, 0x9190, 0x0067, 0x9601, 0x9390, 0x0067, 0x9380, 0x0066, 0x9180, 0x0068, 0x2f18, 0xff80, 0xc014, 0x94f8, 0xece0, 0xe1f7, 0x54e0, 0x40f0, 0xe083, 0x9380, 0x0057, 0x95e8, 0xb607, 0xfc00, 0xcffd, 0x9730, 0xf7a9, 0x9210, 0x0071, 0x9210, 0x0070, 0xde75, 0x9478, 0xff11, 0xc00f, 0xe38a, 0xe290, 0x9701, 0xf7f1, 0x9180, 0x0070, 0x9190, 0x0071, 0x738f, 0x7090, 0x2b89, 0xf011, 0xde65, 0xc001, 0xde1c, 0xfd12, 0xc00a, 0x9210, 0x0068, 0x9180, 0x0066, 0x9190, 0x0067, 0x5a88, 0x4691, 0xf408, 0xce8b, 0xe282, 0xea91, 0x9701, 0xf7f1, 0x94f8, 0xbe1b, 0xba15, 0x9210, 0x025f, 0x9210, 0x025e, 0xcc35, 0x92ff, 0x930f, 0x931f, 0x93cf, 0x93df, 0xe880, 0x2ef8, 0xe000, 0xe0c0, 0xe0d0, 0x2f10, 0x0d1f, 0xbf11, 0xdc85, 0xe029, 0x3384, 0x0792, 0xf00c, 0x2f10, 0x94f6, 0x9621, 0x30c8, 0x05d1, 0xf011, 0x2f01, 0xcff0, 0x5011, 0xbf11, 0x5f1f, 0x2f01, 0x01ec, 0xc010, 0xdc72, 0x5384, 0x4099, 0xff97, 0xc003, 0x9590, 0x9581, 0x4f9f, 0x178c, 0x079d, 0xf414, 0xb701, 0x01ec, 0xb781, 0x5f8f, 0xbf81, 0xb721, 0xe030, 0x2f81, 0xe090, 0x9601, 0x1782, 0x0793, 0xf744, 0xbf01, 0x91df, 0x91cf, 0x911f, 0x910f, 0x90ff, 0x9508, 0x94f8, 0xcfff, 0xff5a, 0xbc17, 0x0640
};

uint16_t bootloader_address = 6080;
