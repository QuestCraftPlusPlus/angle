// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {2769, 4456, 814,  1393, 4713, 332,  3666, 3975, 3929, 2189,
                              3477, 2742, 1591, 1279, 2410, 867,  2099, 3142, 1777, 514,
                              4012, 2164, 3458, 3269, 2913, 57,   1706, 1759, 757,  3073,
                              3428, 1666, 3482, 138,  1696, 2440, 611,  1309, 4719, 3559};
constexpr int mangledkT2[] = {1846, 382,  256,  2681, 3131, 3980, 1928, 189,  4382, 1635,
                              4643, 4370, 4399, 1488, 3579, 3027, 3249, 1222, 3368, 4384,
                              855,  2927, 3006, 3370, 2139, 3748, 3006, 2594, 103,  2034,
                              3435, 2606, 950,  1753, 2472, 701,  1679, 1928, 2665, 2401};
constexpr int mangledkG[]  = {
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    87,   0,    0,    0,    0,    0,
     0,    0,    0,    4125, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1244,
     0,    0,    0,    0,    0,    0,    775,  0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3876, 0,
     0,    0,    0,    0,    4699, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    59,   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    102,  0,    0,    0,    0,    1200, 0,    0,    0,    0,    0,    3472, 0,    0,    0,
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    0,    0,    1880, 0,    0,    0,    0,    0,    0,    429,  0,
     613,  418,  4113, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1849,
     0,    0,    0,    0,    4444, 2251, 0,    0,    0,    0,    0,    0,    0,    4066, 0,    1525,
     0,    1445, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3721, 0,
     0,    265,  0,    4602, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    1784, 0,    4255, 0,    0,    0,    0,    0,    0,    4728, 0,    0,
     0,    0,    0,    0,    930,  0,    0,    0,    0,    0,    0,    1056, 0,    0,    0,    893,
     0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    614,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1295, 4403, 0,    0,
     0,    0,    0,    0,    0,    0,    0,    3065, 1871, 0,    0,    0,    0,    0,    0,    0,
     0,    2559, 0,    2087, 0,    0,    0,    0,    0,    0,    1774, 4418, 0,    0,    0,    0,
     0,    0,    0,    3723, 0,    0,    0,    0,    0,    1240, 0,    0,    4200, 0,    0,    0,
     0,    1456, 0,    0,    2326, 0,    0,    0,    0,    0,    0,    0,    3668, 0,    3038, 1303,
     0,    0,    0,    4442, 0,    3950, 2044, 0,    0,    0,    4068, 0,    0,    456,  0,    0,
     0,    0,    0,    0,    2456, 0,    0,    0,    0,    0,    0,    0,    0,    954,  0,    0,
     0,    797,  0,    0,    0,    0,    1224, 278,  0,    0,    2200, 4721, 0,    0,    0,    4480,
     0,    0,    0,    309,  4226, 0,    0,    0,    0,    1448, 1075, 0,    1955, 4328, 0,    0,
     0,    0,    0,    4737, 0,    0,    0,    0,    0,    0,    0,    480,  0,    318,  0,    0,
     105,  0,    0,    0,    0,    0,    2867, 0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    2602, 0,    0,    0,    3772, 1291, 0,    0,    0,    222,  0,    0,    0,    0,
     0,    0,    647,  0,    0,    0,    0,    2749, 0,    0,    0,    576,  0,    0,    0,    1858,
     0,    0,    42,   0,    2708, 0,    0,    0,    0,    0,    0,    794,  641,  0,    0,    0,
     2027, 0,    0,    0,    0,    3512, 0,    0,    0,    0,    0,    0,    0,    0,    1677, 4338,
     0,    0,    0,    0,    0,    934,  0,    2421, 0,    0,    0,    0,    4078, 491,  3249, 0,
     0,    0,    0,    1719, 0,    0,    0,    2834, 3543, 0,    0,    0,    2593, 0,    0,    0,
     2338, 0,    1625, 0,    4263, 0,    3981, 0,    0,    0,    0,    0,    4340, 0,    0,    1297,
     0,    0,    0,    0,    1934, 0,    910,  0,    0,    0,    4449, 0,    0,    0,    0,    3633,
     57,   0,    1870, 469,  0,    3337, 0,    0,    44,   0,    0,    4379, 0,    0,    0,    3289,
     0,    2177, 0,    3534, 0,    0,    786,  0,    0,    1467, 1648, 0,    3026, 1161, 0,    0,
     0,    0,    0,    3241, 4344, 0,    0,    612,  0,    0,    2884, 0,    0,    0,    0,    1537,
     0,    0,    0,    0,    4730, 0,    0,    0,    0,    1891, 0,    0,    0,    0,    0,    0,
     0,    0,    0,    3002, 0,    0,    0,    0,    538,  0,    0,    1948, 0,    0,    0,    0,
     4587, 283,  0,    1721, 0,    3632, 0,    0,    2040, 10,   1775, 0,    0,    0,    0,    0,
     1124, 0,    701,  0,    1592, 1469, 0,    2186, 0,    4495, 3791, 0,    0,    3456, 0,    0,
     105,  0,    0,    0,    413,  0,    0,    0,    1353, 3072, 0,    0,    0,    2173, 0,    0,
     204,  0,    0,    0,    2557, 0,    790,  1226, 0,    0,    0,    1433, 3338, 0,    1683, 0,
     4252, 3591, 0,    203,  0,    0,    0,    3790, 804,  1317, 0,    0,    1029, 1060, 1795, 1503,
     0,    0,    0,    0,    0,    0,    0,    0,    347,  0,    48,   0,    0,    0,    0,    4230,
     0,    0,    0,    0,    0,    2530, 0,    0,    0,    3372, 1711, 0,    0,    0,    0,    0,
     0,    1832, 1224, 0,    0,    0,    0,    0,    497,  0,    0,    0,    0,    0,    0,    0,
     2656, 0,    0,    0,    0,    0,    1173, 0,    1413, 0,    0,    0,    0,    1534, 0,    0,
     4362, 0,    4063, 4284, 4698, 0,    0,    731,  0,    2062, 1036, 0,    2600, 0,    0,    0,
     0,    543,  2164, 1060, 0,    0,    174,  0,    4112, 0,    93,   0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    4408, 1416, 0,    0,    0,    633,  2652, 3324, 2202, 1942, 0,
     0,    0,    0,    866,  0,    0,    0,    4762, 0,    0,    0,    0,    1869, 4016, 2878, 0,
     6,    0,    0,    1898, 0,    0,    1501, 0,    0,    3402, 0,    0,    0,    0,    0,    4503,
     0,    1443, 4380, 0,    1430, 0,    0,    3262, 2069, 0,    0,    3054, 0,    1208, 0,    0,
     0,    0,    0,    0,    1296, 0,    0,    0,    0,    999,  0,    0,    0,    1089, 0,    0,
     0,    0,    276,  1890, 0,    0,    0,    0,    0,    1661, 0,    0,    0,    0,    0,    0,
     0,    0,    1322, 0,    0,    0,    791,  4016, 562,  650,  332,  0,    0,    0,    0,    1840,
     0,    0,    0,    662,  1080, 0,    0,    1526, 0,    717,  0,    512,  628,  1921, 0,    0,
     0,    1257, 0,    4424, 566,  501,  4524, 0,    0,    2956, 0,    1542, 0,    123,  1472, 0,
     0,    0,    1447, 0,    0,    0,    250,  0,    0,    1016, 0,    0,    0,    0,    1016, 1985,
     0,    1610, 289,  1460, 647,  1218, 4657, 0,    0,    2017, 0,    0,    2408, 0,    4616, 0,
     0,    0,    0,    2263, 1789, 4468, 0,    882,  0,    948,  0,    0,    4395, 0,    0,    0,
     0,    0,    1945, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
     0,    0,    0,    1582, 0,    0,    0,    4523, 486,  0,    0,    0,    0,    0,    0,    0,
     1701, 0,    4009, 0,    0,    4216, 1532, 0,    0,    0,    4211, 0,    4529, 0,    0,    4063,
     0,    0,    0,    0,    0,    0,    3587, 0,    225,  2456, 1316, 0,    4001, 0,    0,    0,
     0,    2131, 188,  0,    0,    0,    0,    0,    0,    0,    4234, 0,    4755, 0,    0,    2184,
     79,   1094, 1196, 0,    0,    0,    0,    934,  0,    0,    0,    0,    0,    0,    4081, 4720,
     0,    498,  0,    1421, 0,    0,    0,    0,    0,    3173, 2455, 0,    1280, 4346, 2999, 0,
     1800, 0,    1843, 0,    0,    274,  0,    0,    0,    0,    0,    4502, 1469, 0,    0,    2081,
     4558, 0,    1123, 0,    0,    0,    0,    0,    726,  0,    1706, 1183, 0,    0,    29,   0,
     0,    0,    1735, 1206, 0,    3340, 2666, 2191, 0,    4739, 0,    1199, 0,    870,  0,    0,
     2764, 1409, 1141, 408,  3225, 0,    894,  0,    0,    0,    0,    0,    0,    0,    0,    1281,
     0,    991,  0,    0,    0,    0,    0,    0,    127,  0,    0,    0,    591,  0,    0,    3716,
     1179, 315,  0,    2721, 0,    382,  0,    2122, 1065, 0,    266,  0,    1971, 2316, 0,    0,
     0,    0,    16,   0,    410,  295,  0,    0,    1187, 0,    0,    0,    2160, 0,    70,   0,
     720,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1893, 4442, 4354, 638,  385,
     0,    0,    0,    0,    0,    0,    4157, 0,    0,    1006, 1086, 0,    0,    0,    0,    0,
     0,    4124, 0,    0,    1370, 0,    1536, 1744, 0,    1953, 279,  0,    4659, 0,    0,    0,
     0,    764,  558,  2029, 0,    325,  0,    3791, 0,    2148, 1543, 3465, 370,  101,  0,    0,
     3989, 0,    2030, 8,    0,    0,    0,    0,    0,    1845, 1477, 0,    1099, 0,    1010, 0,
     0,    0,    1645, 1246, 0,    3975, 0,    3325, 333,  2707, 0,    0,    0,    363,  0,    1169,
     4360, 0,    2610, 0,    0,    0,    0,    0,    0,    0,    0,    3941, 920,  0,    0,    0,
     184,  0,    0,    0,    4704, 3476, 0,    4743, 0,    0,    0,    0,    0,    3562, 0,    0,
     575,  0,    0,    0,    0,    0,    0,    440,  3921, 0,    0,    200,  0,    2126, 0,    0,
     0,    3366, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1939, 0,    3021, 0,
     15,   0,    1015, 1988, 0,    0,    0,    954,  0,    1102, 0,    0,    0,    0,    3981, 3095,
     1682, 797,  606,  0,    0,    0,    1490, 0,    0,    2275, 1696, 0,    0,    0,    3035, 814,
     0,    0,    2055, 0,    0,    0,    0,    0,    0,    363,  611,  0,    0,    0,    1715, 0,
     1807, 0,    4483, 4742, 4532, 0,    0,    0,    738,  0,    0,    1595, 3979, 0,    0,    0,
     2403, 0,    0,    0,    0,    632,  1938, 2619, 0,    986,  0,    146,  0,    2115, 0,    0,
     2584, 1925, 0,    0,    0,    207,  0,    1001, 0,    806,  0,    125,  0,    590,  0,    357,
     0,    1649, 0,    1731, 794,  1958, 1534, 1063, 4287, 3508, 1061, 2091, 0,    0,    0,    0,
     1273, 2164, 2102, 1698, 4134, 0,    0,    0,    1782, 4551, 0,    2548, 0,    1298, 1814, 1565,
     592,  1338, 0,    0,    0,    3964, 0,    0,    4521, 0,    4228, 0,    951,  0,    0,    2064,
     0,    0,    0,    0,    203,  0,    0,    0,    0,    244,  0,    0,    1189, 0,    1131, 0,
     0,    0,    0,    0,    2166, 0,    0,    0,    1069, 1744, 0,    0,    696,  579,  2799, 0,
     925,  483,  0,    0,    0,    0,    2143, 216,  0,    818,  0,    0,    0,    0,    0,    0,
     0,    0,    0,    0,    0,    1766, 0,    914,  1693, 0,    0,    1635, 0,    2065, 0,    0,
     0,    0,    0,    0,    843,  0,    0,    0,    1143, 0,    1065, 0,    0,    0,    190,  4735,
     0,    3066, 1274, 244,  4758, 365,  0,    0,    0,    0,    3525, 4196, 4273, 1805, 3732, 3593,
     0,    1641, 0,    143,  0,    0,    95,   0,    0,    0,    0,    0,    573,  121,  0,    0,
     0,    0,    0,    815,  1376, 1294, 0,    156,  0,    0,    4156, 1067, 668,  0,    2572, 0,
     0,    0,    0,    0,    209,  2105, 979,  0,    27,   3808, 0,    0,    0,    961,  0,    0,
     63,   0,    1659, 0,    39,   0,    0,    0,    631,  0,    0,    0,    0,    0,    140,  0,
     1864, 0,    0,    4046, 3531, 0,    897,  0,    0,    0,    0,    0,    0,    4629, 408,  3123,
     0,    929,  0,    1402, 3079, 537,  980,  3626, 0,    1620, 1967, 0,    1468, 0,    1144, 3061,
     1349, 2261, 0,    339,  1506, 292,  4728, 0,    0,    4,    1220, 175,  0,    0,    0,    0,
     1519, 0,    810,  0,    0,    0,    0,    969,  87,   819,  0,    4344, 0,    0,    0,    0,
     4679, 740,  1416, 643,  1628, 0,    1389, 2357, 0,    4123, 0,    1914, 0,    0,    0,    3237,
     0,    357,  0,    0,    1771, 931,  2873, 0,    0,    0,    0,    0,    2381, 2888, 0,    0,
     0,    1132, 0,    450,  1966, 572,  2367, 1919, 535,  1467, 0,    446,  0,    0,    0,    1803,
     3498, 280,  0,    0,    0,    3197, 0,    0,    0,    0,    4032, 0,    1036, 0,    0,    3381,
     0,    1277, 0,    0,    0,    39,   0,    0,    0,    0,    0,    3729, 0,    3677, 0,    2407,
     0,    0,    0,    0,    238,  0,    0,    984,  0,    1750, 4012, 0,    0,    0,    484,  241,
     0,    0,    0,    0,    866,  1761, 1571, 63,   289,  2104, 755,  0,    0,    659,  2648, 0,
     1116, 1822, 480,  0,    0,    4613, 0,    333,  818,  4317, 0,    3399, 0,    1599, 608,  0,
     0,    1172, 0,    0,    0,    873,  2034, 4337, 1514, 1136, 0,    2172, 1779, 0,    2288, 0,
     0,    0,    58,   1549, 0,    0,    668,  1957, 2178, 724,  0,    1414, 956,  0,    0,    0,
     762,  0,    0,    21,   0,    0,    1811, 1483, 0,    0,    4594, 0,    0,    1925, 545,  1910,
     0,    513,  4242, 0,    0,    753,  0,    3028, 0,    0,    4456, 0,    847,  0,    0,    1344,
     0,    0,    0,    1435, 0,    3453, 0,    724,  0,    0,    0,    400,  621,  1743, 46,   189,
     1156, 0,    180,  0,    0,    262,  0,    3143, 2169, 0,    3545, 1088, 0,    0,    410,  0,
     1650, 728,  0,    1832, 0,    0,    1797, 861,  1222, 2737, 0,    4158, 0,    3827, 0,    0,
     466,  2017, 786,  3861, 0,    0,    4492, 581,  0,    0,    0,    0,    0,    13,   158,  0,
     0,    4230, 0,    0,    1068, 0,    1580, 3057, 2090, 0,    585,  1034, 0,    0,    0,    0,
     266,  0,    0,    0,    45,   2127, 4093, 0,    567,  1401, 1275, 0,    0,    0,    2952, 1280,
     3739, 0,    0,    3541, 0,    0,    0,    0,    0,    0,    0,    2587, 0,    309,  12,   0,
     0,    0,    308,  551,  2225, 0,    4297, 0,    1408, 0,    0,    0,    221,  0,    538,  1483,
     911,  1898, 0,    0,    3805, 0,    0,    0,    0,    4651, 0,    0,    0,    0,    0,    3600,
     253,  829,  0,    2720, 779,  1865, 0,    0,    1338, 0,    0,    0,    0,    0,    1548, 0,
     0,    0,    552,  0,    466,  0,    1123, 0,    0,    51,   0,    0,    0,    4053, 0,    1555,
     0,    0,    395,  0,    0,    0,    0,    865,  1446, 0,    4576, 152,  805,  518,  3982, 0,
     0,    0,    0,    0,    1463, 0,    2101, 3577, 2365, 0,    4288, 25,   1507, 753,  495,  658,
     0,    0,    0,    0,    2806, 0,    298,  0,    0,    0,    0,    0,    1054, 0,    1996, 423,
     3168, 0,    3775, 1798, 4039, 1859, 0,    2990, 1865, 0,    0,    1572, 0,    4645, 0,    0,
     4520, 0,    720,  0,    924,  0,    1748, 3574, 0,    798,  0,    2927, 1737, 0,    4562, 0,
     0,    4069, 4700, 1041, 313,  0,    0,    0,    0,    1909, 0,    3700, 1270, 0,    0,    536,
     0,    0,    2475, 4378, 932,  486,  0,    0,    313,  0,    0,    2510, 4526, 0,    0,    0,
     372,  4,    2541, 19,   0,    0,    2399, 2,    461,  2264, 173,  124,  0,    1202, 139,  798,
     1359, 4365, 0,    0,    853,  57,   2173, 383,  812,  2781, 0,    0,    0,    610,  0,    0,
     0,    1850, 0,    0,    2959, 302,  0,    3552, 0,    0,    0,    2016, 294,  0,    877,  0,
     0,    1051, 4517, 42,   700,  684,  0,    0,    1825, 0,    2103, 0,    2927, 18,   0,    1719,
     314,  0,    4062, 0,    0,    375,  1368, 2095, 0,    0,    96,   0,    0,    1763, 0,    484,
     110,  0,    0,    0,    1153, 0,    0,    1268, 0,    0,    376,  2153, 0,    0,    1801, 0,
     0,    0,    3969, 3049, 0,    0,    275,  0,    70,   587,  0,    0,    582,  1575, 2710, 0,
     2257, 0,    0,    2334, 1929, 0,    0,    863,  1225, 0,    1610, 372,  3649, 0,    0,    0,
     51,   1441, 781,  1205, 4306, 4419, 1629, 0,    797,  813,  4370, 729,  0,    0,    267,  3159,
     0,    2165, 3504, 0,    2120, 1657, 4362, 4678, 762,  4497, 1819, 492,  0,    2067, 623,  0,
     0,    0,    0,    317,  0,    3423, 4042, 0,    3448, 0,    2527, 0,    0,    3139, 4147, 3399,
     0,    0,    782,  4440, 1675, 0,    0,    0,    0,    0,    3123, 0,    0,    930,  980,  0,
     459,  2054, 4364, 0,    0,    1769, 0,    169,  684,  0,    782,  0,    2798, 0,    0,    1313,
     1396, 0,    0,    1776, 0,    2597, 0,    0,    0,    3818, 0,    0,    0,    4055, 1294, 0,
     2436, 0,    784,  4020, 0,    0,    0,    153,  0,    0,    3159, 0,    0,    0,    4047, 109,
     157,  1308, 0,    0,    0,    0,    1232, 0,    0,    490,  801,  0,    2044, 4560, 1315, 4512,
     0,    4545, 0,    1908, 0,    1971, 4672, 471,  1271, 0,    0,    0,    437,  855,  0,    1893,
     60,   0,    789,  1408, 0,    3341, 1010, 0,    1478, 0,    1339, 370,  1912, 0,    1502, 529,
     1549, 1821, 0,    0,    690,  539,  0,    0,    0,    3593, 0,    1790, 3609, 2381, 0,    0,
     0,    0,    1173, 32,   0,    0,    0,    0,    0,    0,    4759, 2129, 0,    0,    2094, 3708,
     1434, 0,    4548, 0,    3027, 0,    3694, 1636, 0,    4716, 285,  3525, 4244, 4028, 736,  0,
     0,    0,    0,    883,  823,  3484, 0,    0,    0,    249,  3360, 0,    2168, 1949, 0,    0,
     1050, 0,    0,    1581, 0,    0,    910,  601,  779,  0,    1875, 730,  231,  3743, 4072, 0,
     0,    4758, 774,  1630, 0,    0,    312,  3045, 2434, 865,  0,    0,    0,    768,  0,    3680,
     0,    0,    0,    711,  2264, 436,  0,    0,    668,  0,    746,  0,    733,  1136, 0,    337,
     4721, 0,    0,    0,    0,    381,  0,    4114, 819,  0,    1138, 1843, 3632, 0,    0,    0,
     25,   0,    48,   0,    698,  0,    0,    0,    0,    4685, 0,    4562, 0,    0,    3704, 1654,
     0,    0,    0,    0,    0,    0,    1306, 1449, 0,    0,    0,    0,    0,    985,  0,    1677,
     0,    0,    589,  1422, 0,    0,    0,    0,    0,    0,    0,    0,    1307, 0,    1937, 0,
     335,  0,    2379, 1491, 4722, 4758, 1343, 4402, 0,    1921, 4415, 4077, 0,    0,    0,    0,
     0,    4437, 0,    744,  1986, 2074, 0,    2930, 0,    0,    238,  0,    0,    1518, 1826, 0,
     0,    0,    0,    0,    503,  1137, 935,  0,    0,    3891, 445,  1287, 0,    0,    0,    345,
     4333, 2058, 145,  0,    0,    1143, 0,    0,    4469, 3280, 0,    0,    4143, 0,    0,    808,
     1437, 1256, 1781, 2110, 599,  0,    0,    2226, 1936, 0,    1326, 0,    0,    0,    0,    1264,
     505,  4249, 535,  1920, 0,    0,    1418, 0,    0,    0,    0,    0,    0,    4375, 1680, 0,
     0,    0,    0,    1398, 359,  328,  1978, 0,    2137, 0,    383,  4107, 1187, 0,    859,  0,
     946,  333,  0,    0,    44,   3299, 0,    4513, 0,    0,    0,    0,    0,    0,    973,  2426,
     0,    392,  1594, 0,    0,    1089, 0,    0,    2276, 4106, 3995, 0,    1127, 4038, 270,  1642,
     1364, 0,    1935, 1569, 1078, 1205, 0,    0,    0,    1373, 41,   340,  0,    1052, 0,    30,
     357,  2393, 185,  282,  0,    202,  0,    3909, 1334, 3585, 0,    397,  1014, 1794, 0,    3261,
     0,    4763, 0,    4538, 1124, 0,    1749, 0,    4531, 1829, 1073, 231,  2074, 2358, 0,    884,
     548,  0,    490,  0,    0,    0,    1906, 0,    102,  1053, 0,    1752, 291,  1523, 330,  115,
     4669, 4601, 326,  0,    0,    4143, 4617, 834,  3623, 0,    1669, 4472, 0,    0,    0,    0,
     3941, 3364, 0,    0,    1369, 0,    4492, 0,    21,   0,    0,    0,    1205, 0,    36,   0,
     0,    0,    0,    0,    122,  1852, 0,    0,    0,    1104, 0,    293,  3640, 3895, 1524, 2071,
     2405, 0,    0,    0,    0,    0,    0,    0,    3525, 1381, 0,    0,    0,    0,    0,    0,
     1905, 1554, 0,    572,  0,    0,    0,    1177, 0,    143,  0,    0,    26,   1597, 0,    435,
     0,    0,    432,  720,  311,  2022, 0,    0,    1240, 1013, 1634, 3426, 196,  683,  1496, 0,
     4610, 0,    0,    0,    0,    1847, 4228, 4692, 695,  0,    1733, 182,  7,    3635, 0,    4683,
     2179, 2027, 0,    0,    0,    1424, 4228, 0,    1688, 0,    0,    2650, 1734, 0,    0,    0,
     0,    3923, 4169, 520,  0,    0,    0,    89,   0,    1120, 264,  1482, 1044, 0,    271,  0,
     2029, 44,   0,    0,    0,    0,    0,    342,  0,    0,    1345, 638,  0,    0,    0,    3698,
     0,    1737, 4182, 4686, 0,    0,    290,  0,    4056, 1020, 0,    0,    4104, 4602, 1249, 2070,
     618,  1484, 4116, 0,    0,    1375, 0,    1571, 1666, 3110, 551,  763,  0,    724,  0,    1139,
     4647, 0,    0,    3888, 0,    4357, 588,  0,    0,    4401, 0,    431,  0,    1658, 627,  0,
     743,  0,    0,    2547, 62,   0,    0,    0,    0,    0,    0,    131,  483,  0,    2895, 2015,
     52,   4319, 0,    670,  0,    0,    4714, 0,    1390, 0,    4545, 3820, 0,    0,    1242, 4444,
     972,  0,    0,    601,  411,  525,  0,    1132, 589,  0,    0,    0,    0,    675,  0,    0,
     0,    2178, 1757, 0,    830,  1194, 0,    0,    650,  1658, 429,  3966, 477,  0,    350,  233,
     0,    2209, 1189, 0,    2270, 2507, 0,    0,    3800, 0,    0,    3986, 0,    0,    3404, 0,
     1749, 0,    1504, 953,  0,    444,  3637, 4462, 2048, 2014, 0,    34,   4711, 0,    1212, 4536,
     3703, 1068, 0,    1243, 613,  530,  4683, 1579, 0,    0,    0,    4675, 499,  0,    3237, 1330,
     0,    1028, 0,    4606, 3517, 0,    878,  361,  0,    0,    4333, 0,    3144, 0,    3931, 641,
     2374, 0,    0,    1461, 0,    956,  0,    2073, 1004, 0,    0,    1665, 3985, 0,    1031, 0,
     0,    3796, 1415, 0,    0,    0,    1674, 4152, 3831, 184,  4385, 1297, 0,    1952, 0,    1032,
     3195, 1879, 0,    2013, 0,    1959, 0,    1225, 1109, 2737, 0,    0,    0,    4107, 1679, 1495,
     0,    0,    0,    0,    3810, 2917, 0,    0,    0,    502,  1286, 0,    2746, 0,    4267, 1989,
     0,    834,  977,  0,    0,    0,    0,    1184, 1335, 0,    0,    0,    3415, 2112, 1560, 0,
     1489, 1846, 1428, 0,    4741, 197,  0,    0,    0,    0,    0,    0,    0,    1108, 1714, 0,
     0,    0,    0,    0,    0,    4189, 2028, 1931, 3206, 4536, 0,    1878, 3171, 0,    0,    2288,
     0,    0,    1079, 1754, 0,    80,   0,    1734, 118,  3150, 1508, 0,    0,    0,    487,  0,
     1501, 0,    263,  0,    1980, 0,    0,    1276, 1251, 4384, 1615, 0,    333,  0,    0,    0,
     0,    3761, 338,  0,    329,  2049, 0,    0,    1423, 4263, 1475, 2128, 968,  0,    0,    2092,
     3376, 0,    286,  1222, 0,    0,    4286, 3344, 559,  0,    0,    4715, 0,    377,  0,    750,
     840,  1177, 0,    0,    0,    0,    0,    4566, 0,    1335, 0,    3709, 199,  3147, 0,    4667,
     4603, 475,  4319, 0,    959,  0,    0,    105,  0,    0,    1498, 0,    533,  11,   0,    0,
     825,  607,  1393, 0,    3415, 517,  0,    3896, 1067, 295,  2905, 0,    3562, 357,  1888, 0,
     4747, 0,    674,  833,  0,    0,    0,    0,    0,    3292, 1735, 661,  0,    0,    1747, 1024,
     0,    4650, 80,   0,    597,  843,  836,  1736, 4590, 2206, 0,    448,  747,  1842, 1486, 0,
     4178, 4496, 575,  780,  1751, 0,    0,    901,  0,    1034, 0,    4256, 0,    1720, 4661, 1482,
     2550, 198,  0,    0,    493,  427,  743,  0,    1507, 981,  3571, 0,    0,    1159, 0,    888,
     833,  1623, 0,    0,    0,    0,    0,    1112, 1871, 0,    0,    0,    177,  1341, 1509, 0,
     0,    1308, 1347, 319,  606,  0,    4263, 3410, 0,    0,    1209, 0,    3816, 1430, 1043, 0,
     1857, 0,    0,    0,    314,  0,    584,  106,  353,  0,    1174, 773,  0,    0,    0,    0,
     0,    0,    0,    4041, 8,    0,    1612, 0,    4633, 1787, 0,    4733, 1846, 1819, 1776, 4626,
     0,    0,    0,    522,  0,    1732, 481,  598,  4169, 393,  0,    2151, 401,  1609, 4712, 0,
     488,  74,   166,  0,    0,    0,    1278, 613,  540,  997,  111,  0,    1239, 1310, 0,    4535,
     2818, 195,  3928, 1293, 1284, 0,    2673, 192,  866,  715,  867,  0,    0,    1591, 0,    0,
     0,    0,    721,  783,  673,  0,    0,    0,    0,    0,    0,    1873, 963,  81,   0,    0,
     183,  277,  3532, 1647, 0,    0,    0,    0,    0,    820,  1831, 798,  0,    4079, 0,    4117,
     0,    2966, 0,    0,    0,    0,    0,    2162, 0,    0,    55,   0,    1543, 1901, 1310, 4752,
     0,    834,  811,  910,  4224, 0,    451,  1072, 0,    0,    1299, 2094, 0,    2114, 0,    0,
     4741, 702,  0,    0,    0,    0,    0,    0,    4242, 380,  0,    1860, 4656, 444,  0,    3922,
     0,    1250, 876,  301,  0,    371,  952,  0,    4482, 482,  0,    1135, 0,    1562, 0,    130,
     0,    2072, 0,    4063, 3972, 1732, 1058, 0,    0,    0,    0,    0,    4666, 3786, 508,  0,
     0,    0,    0,    1467, 3496, 0,    665,  0,    0,    1933, 0,    953,  2460, 1422, 1705, 533,
     0,    624,  0,    0,    1387, 0,    1152, 128,  0,    265,  1497, 0,    1276, 0,    0,    0,
     0,    122,  0,    509,  3333, 0,    0,    3711, 706,  0,    2736, 2684, 1380, 0,    1160, 0,
     4176, 298,  0,    0,    3782, 4072, 1708, 0,    0,    0,    718,  0,    1039, 0,    3810, 3080,
     0,    2499, 1975, 0,    2532, 1834, 0,    0,    3980, 0,    0,    0,    0,    1792, 0,    0,
     0,    408,  0,    0,    4301, 1556, 0,    1855, 1689, 0,    576,  0,    0,    1171, 1695, 6,
     0,    1643, 0,    3876, 419,  0,    1222, 0,    0,    866,  0,    29,   890,  0,    334,  1311,
     2197, 370,  1970, 371,  1783, 0,    2904, 0,    1479, 3429, 997,  655,  0,    0,    808,  4190,
     0,    662,  0,    1399, 4743, 921,  3412, 0,    872,  0,    279,  328,  0,    3746, 0,    0,
     0,    2737, 2917, 0,    925,  1015, 1043, 0,    0,    0,    703,  4679, 0,    0,    4581, 967,
     0,    0,    0,    2330, 4119, 0,    0,    0,    4567, 0,    1885, 594,  1336, 0,    0,    1155,
     1536, 4218, 0,    1960, 917,  0,    213,  1209, 3571, 0,    68,   0,    4508, 1625, 1167, 2064,
     554,  0,    928,  0,    1485, 0,    0,    0,    0,    0,    3152, 0,    423,  247,  0,    0,
     2024, 33,   0,    3132, 4674, 4752, 0,    2088, 0,    0,    0,    3333, 0,    0,    0,    1196,
     765,  0,    0,    0,    0,    1988, 770,  560,  1397, 4403, 831,  0,    0,    0,    1602, 715,
     1641, 2529, 1756, 2771, 137,  0,    229,  2978, 4446, 0,    504,  1399, 0,    0,    0,    0,
     0,    1115, 893,  0,    0,    4745, 4022, 0,    801,  4601, 265,  3890, 689,  0,    36,   0,
     4029, 0,    1874, 525,  841,  1267, 0,    4138, 0,    3852, 3214, 0,    3023, 3286, 4760, 0,
     0,    80,   2403, 1932, 155,  0,    3419, 0,    0,    1456, 522,  713,  851,  1664, 0,    2000,
     0,    0,    0,    159,  0,    0,    195,  0,    0,    1280, 0,    1436, 0,    0,    983,  3595,
     0,    606,  1942, 0,    0,    0,    4392, 964,  0,    1622, 884,  0,    0,    1009, 1742, 861,
     658,  0,    0,    0,    1196, 0,    0,    0,    828,  694,  3369, 4378, 1974, 462,  0,    576,
     1101, 732,  933,  1603, 1068, 0,    0,    0,    1001, 0,    1155, 2802, 0,    167,  0,    13,
     0,    0,    0,    0,    1182, 2005, 0,    284,  4493, 1602, 1676, 0,    0,    220,  801,  0,
     2696, 2096, 0,    0,    0,    0,    1987, 180,  4194, 1770, 795,  0,    1257, 2438, 0,    0,
     579,  0,    0,    1149, 0,    0,    1163, 0,    3817, 3414, 0,    785,  0,    523,  0,    3626,
     2073, 355,  560,  0,    848,  2045, 1710, 0,    4209, 2920, 1348, 530,  414,  525,  1281, 4622,
     1713, 1154, 637,  0,    0,    266,  0,    3229, 3752, 0,    0,    2312, 3022, 189,  0,    0,
     0,    0,    1453, 1473, 0,    0,    0,    0,    459,  1727, 0,    0,    0,    4545, 0,    1438,
     646,  0,    691,  394,  1751, 4497, 899,  2136, 967,  0,    543,  987,  0,    1354, 3007, 3862,
     30,   0,    789,  0,    3624, 0,    0,    1057, 1808, 0,    653,  0,    5,    3372, 0,    0,
     87,   1586, 4721, 723,  0,    0,    1809, 465,  0,    4650, 4344, 425,  996,  0,    0,    3001,
     4308, 0,    0,    447,  0,    849,  1289, 0,    844,  729,  957,  0,    0,    2036, 3661, 3497,
     0,    1600, 1327, 20,   0,    826,  0,    1647, 0,    929,  1127, 4459, 0,    870,  1491, 373,
     0,    572,  0,    0,    0,    3972, 0,    1125, 0,    1170, 1795, 1755, 1563, 1,    0,    3339,
     0,    0,    4598, 3333, 1528, 953,  0,    856,  2138, 1631, 632,  275,  4268, 1358, 1571, 0,
     0,    1164, 3730, 4548, 1197, 0,    0,    0,    1722, 4208, 2201, 2127, 1746, 3679, 678,  1479,
     2538, 1397, 0,    0,    245,  1410, 0,    0,    485,  3892, 0,    854,  4136, 677,  0,    0,
     1230, 181,  0,    1757, 1730, 0,    0,    568,  0,    0,    1856, 598,  1815, 81,   0,    864,
     2937, 1483, 1001, 1927, 646,  472,  0,    1245, 150,  3435, 1304, 0,    1616, 2898, 4327, 1929,
     0,    2134, 0,    1363, 0,    2001, 0,    524,  0,    0,    3462, 0,    1372, 0,    0,    2004,
     0,    0,    1511, 2767, 903,  3074, 753,  0,    1513, 2188, 0,    4023, 390,  1047, 1384, 0,
     2681, 1590, 0,    0,    595,  0,    235,  4490, 542,  0,    107,  325,  1311, 2074, 4092, 3785,
     1382, 3373, 0,    4093, 2760, 4446, 1493, 0,    3710, 0,    2144, 1279, 4683, 0,    1229, 1608,
     0,    0,    3687, 0,    0,    0,    553,  0,    344,  0,    0,    1928, 2159, 362,  0,    963,
     0,    0,    0,    0,    1047, 0,    4703, 1613, 1328, 48,   3743, 0,    1560, 0,    571,  1590,
     1424, 599,  0,    1160, 0,    256,  3662, 1622, 4659, 0,    3432, 0,    0,    0,    4215, 0,
     378,  705,  0,    1025, 830,  0,    2884, 1010, 1313, 1538, 0,    1909, 0,    4367, 881,  303,
     0,    1994, 733,  0,    901,  2098, 1368, 1648, 0,    3316, 407,  3931, 2473, 827,  0,    1112,
     0,    3111, 0,    693,  3209, 0,    800,  0,    0,    1381, 0,    676,  299,  0,    0,    1342,
     0,    0,    0,    2236, 0,    0,    4680, 4041, 34,   0,    0,    0,    0,    0,    0,    3243,
     4527, 0,    1235, 0,    0,    4037, 83,   0,    1449, 0,    3571, 2039, 615,  0,    0,    3627,
     0,    0,    527,  0,    0,    2053, 0,    4240, 0,    1025, 2142, 542,  0,    0,    55,   1636,
     0,    98,   0,    0,    852,  4447, 0,    1605, 1684, 0,    811,  0,    0,    1987, 3065, 2041,
     358,  2234, 0,    3368, 685,  1199, 301,  0,    3031, 4586, 3482, 0,    147,  192,  2068, 689,
     0,    1878, 0,    2141, 3885, 3545, 0,    0,    0,    0,    0,    443,  0,    4235, 1261, 0,
     1817, 0,    0,    1112, 1417, 0,    3520, 649,  1707, 1785, 0,    1853, 0,    4663, 0,    398,
     945,  1080, 0,    1290, 4641, 3355, 0,    4262, 0,    0,    0,    0,    0,    0,    0,    2033,
     1712, 1434, 5,    1087, 777,  0,    0,    1535, 1023, 0,    0,    0,    0,    3130, 0,    0,
     0,    566,  989,  2914, 0,    0,    4322, 0,    1421, 1962, 0,    0,    2536, 3035, 204,  0,
     490,  2181, 4114, 1552, 1789, 0,    0,    0,    0,    1021, 0,    0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 4764;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 4764;
}

constexpr int unmangledkT1[] = {207, 209, 72,  305, 39,  380, 122, 25, 321, 31,  201, 52, 3,
                                57,  22,  196, 317, 391, 73,  249, 25, 105, 120, 0,   37, 48};
constexpr int unmangledkT2[] = {114, 149, 364, 381, 222, 147, 209, 200, 143, 13,  206, 288, 10,
                                146, 9,   282, 287, 48,  46,  293, 209, 126, 337, 376, 111, 335};
constexpr int unmangledkG[]  = {
     0,   0,   0,   0,   0,   0,   0,   0,   0,   183, 0,   162, 0,   0,   261, 99,  285, 0,   0,
     0,   0,   0,   0,   0,   88,  0,   0,   0,   0,   230, 71,  0,   0,   0,   250, 0,   0,   379,
     100, 310, 67,  0,   196, 0,   0,   0,   102, 0,   0,   249, 0,   0,   0,   0,   0,   0,   0,
     0,   160, 192, 99,  0,   272, 131, 0,   253, 72,  0,   0,   171, 93,  365, 0,   198, 0,   207,
     0,   20,  0,   0,   153, 0,   0,   88,  155, 78,  0,   73,  0,   0,   5,   46,  0,   0,   0,
     16,  211, 0,   0,   0,   152, 0,   263, 41,  262, 333, 0,   0,   141, 328, 0,   42,  261, 293,
     92,  371, 0,   0,   0,   1,   119, 0,   290, 0,   84,  57,  0,   0,   36,  0,   0,   222, 0,
     0,   0,   69,  151, 326, 0,   0,   387, 0,   380, 74,  258, 0,   0,   249, 91,  125, 0,   248,
     0,   14,  0,   0,   361, 0,   0,   0,   175, 0,   75,  215, 112, 56,  118, 335, 0,   0,   131,
     109, 0,   264, 0,   0,   0,   0,   111, 0,   0,   0,   100, 0,   265, 138, 88,  0,   0,   0,
     0,   97,  0,   0,   166, 0,   283, 277, 0,   0,   0,   274, 109, 310, 48,  0,   62,  66,  47,
     25,  0,   369, 0,   364, 123, 194, 190, 0,   0,   0,   0,   0,   0,   195, 192, 100, 259, 31,
     326, 0,   51,  141, 260, 202, 0,   101, 0,   159, 0,   0,   0,   0,   0,   71,  116, 0,   382,
     204, 0,   197, 339, 348, 0,   0,   130, 27,  153, 60,  53,  0,   140, 283, 0,   122, 189, 0,
     0,   0,   292, 0,   0,   197, 0,   191, 202, 59,  101, 0,   0,   120, 17,  156, 198, 0,   157,
     0,   129, 0,   0,   0,   83,  321, 124, 225, 0,   298, 357, 107, 0,   349, 113, 69,  0,   0,
     0,   277, 95,  47,  367, 83,  5,   182, 110, 0,   97,  0,   80,  0,   130, 43,  0,   13,  0,
     0,   385, 23,  369, 0,   105, 18,  335, 168, 0,   118, 0,   299, 3,   235, 54,  0,   374, 106,
     297, 0,   362, 117, 0,   163, 58,  165, 0,   372, 159, 91,  80,  68,  130, 259, 2,   0,   99,
     244, 0,   0,   319, 328, 95,  0,   41,  0,   0,   322, 0,   0,   0,   0,   47,  24,  304, 0,
     260, 0,   0,   0,   26,  258, 244, 81,  0,   188, 0,   339};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 392;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 392;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
