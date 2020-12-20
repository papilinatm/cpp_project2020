#pragma once
#include <string>
#include "DataSets.h"

template <typename T>
struct DataSet
{
    std::string description;
    std::vector<T> data;
};
std::vector<DataSet<int>> GenerateIntDataSets()
{
    return {
        { "random integer", GenerateData(10) },
        { "random integer", GenerateData(100) },
        { "random integer", GenerateData(1000) },
        { "minus integer AhmatzyanovTeam", {72,  -100,  -81,  -55,  -75,  53,  -45,  -32,  -15,  69,  67,  17,  35,  -58,  -16,  -61,  10,  60,  -66,  -42,  57,  -3,  89,  9,  -60,  -5,  36,  -19,  -22,  18,  -82,  33,  -39,  71,  -93,  -17,  70,  26,  -83,  68,  80,  31,  -38,  -91,  -99,  -11,  99,  -30,  14,  -12,  5,  49,  -29,  62,  -52,  -25,  38,  63,  28,  52,  41,  -67,  -14,  -85,  -47,  13,  -9,  -4,  8,  6,  -31,  21,  -53,  -48,  -46,  -97,  83,  -28,  16,  -86,  59,  -70,  74,  85,  50,  -41,  -24,  46,  92,  39,  -74,  -34,  -2,  11,  73,  -59,  43,  55,  51,  -40} },
        { "bad quickTest Ahmatzyanov", {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  2,  5,  1,  6,  3,  7,  0,  8,  4,  9} },
        { "good quickTest Ahmatzyanov (preSorted) ", {5, 2, 1, 4, 3, 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99 } },
        { "normal quickSort Ahmatzyanov (decreased)", {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 87, 6, 5, 4, 3, 2, 1 }},


        { "random integer for BitonicSortBySharnin", GenerateData(8) }, //to sort Bitonik it is necessary that the array contains 2 ^ n elements 
        { "random integer for BitonicSortBySharnin", GenerateData(128) },
        { "random integer for BitonicSortBySharnin", GenerateData(1024) },

        { "negative integer Kononenko", NegativeIntegerGenerateData(10) },
        { "semi-sorted integer Kononenko", SemiSortedIntegerGenerateData(100) },
        { "full-sorted integer Kononenko", FullSortedIntegerGenerateData(1000) },
    };
}
std::vector<DataSet<double>> GenerateDoubleDataSets()
{
    return {
       { "asc sorted double", {1.0, 2.0} },
       { "desc sorted double", {3.0,2.0} },
       { "just doubles", GenerateDoubleData() },
       { "normal AhmatzyanovTeam (10)", {383, 1639.82, -1867.13, -924.249, -1213.2, 1180.98, 402.012, 652.604, -4460.48, -462.063}},
       { "normal AhmatzyanovTeam (100)", {383, 1639.82, -1867.13, -924.249, -1213.2, 1180.98, 402.012, 652.604, -4460.48, -462.063, -431.429, 6100.73, 817.677, 65.0176, 5580.05, -1218.92, -563.875, -1548.17, 260.481, 744.408, 517.053, -671.865, -567.022, -805.13, 1843.56, 534.704, 1332.47, -421.033, -69.6027, -180.467, 6022.63, 876.75, 26.3718, -4368.54, -81.3132, -184.797, -3071.18, 595.756, 11.5174, 157.514, -343.36, -377.783, -1052.54, 1655.52, 784.123, 1022.23, -458.145, -326.502, -492.077, 1230.9, 427.994, 708.748, -558.314, -1067.21, -1152.77, 39454.5, 1010.29, 188.917, 8357.1, -364.424, -320.239, -3583.86, 124.72, 331.678, 857.455, -897.851, -846.298, -1407.96, 711.132, 862.702, 195.794, -2896.23, -601.706, -740.295, 4740.35, 398.155, 526.487, -11751.4, -50.1281, -837.081, -788.135, 1040.32, 290.625, 713.312, -1158.78, -593.269, -1050.3, 1142.61, 754.473, 782.081, -2080.02, -60.3399, -1079.11, 1159.32, 762.281, 16.4344, -1252.56, -633.412, -114.734, 13535.6}},
       { "normal AhmatzyanovTeam (1000)", {383, 1639.82, -1867.13, -924.249, -1213.2, 1180.98, 402.012, 652.604, -4460.48, -462.063, -431.429, 6100.73, 817.677, 65.0176, 5580.05, -1218.92, -563.875, -1548.17, 260.481, 744.408, 517.053, -671.865, -567.022, -805.13, 1843.56, 534.704, 1332.47, -421.033, -69.6027, -180.467, 6022.63, 876.75, 26.3718, -4368.54, -81.3132, -184.797, -3071.18, 595.756, 11.5174, 157.514, -343.36, -377.783, -1052.54, 1655.52, 784.123, 1022.23, -458.145, -326.502, -492.077, 1230.9, 427.994, 708.748, -558.314, -1067.21, -1152.77, 39454.5, 1010.29, 188.917, 8357.1, -364.424, -320.239, -3583.86, 124.72, 331.678, 857.455, -897.851, -846.298, -1407.96, 711.132, 862.702, 195.794, -2896.23, -601.706, -740.295, 4740.35, 398.155, 526.487, -11751.4, -50.1281, -837.081, -788.135, 1040.32, 290.625, 713.312, -1158.78, -593.269, -1050.3, 1142.61, 754.473, 782.081, -2080.02, -60.3399, -1079.11, 1159.32, 762.281, 16.4344, -1252.56, -633.412, -114.734, 13535.6, 921.933, 639.01, 4272.25, -483.233, -493.205, -2494.2, 141.299, 917.805, 844.186, -852.683, -652.639, -1504.34, 660.132, 281.332, 461.647, -1353.55 - 890.291, -951.53, 2347.6, 666.687, 540.42, -14980.4, -35.7651, -131.761, -1045.53, 978.781, 509.542, 2904.99, -1023.24, -944.852, -1543.73, 1465.23, 497.702, 713.315, -1263.4, -968.79, -499.552, 2043.9, 224.927, 869.124, -2669.18, -934.828, -904.81, 14416.8, 577.399, 21.4965, 3215.84, -463.981, -752.37, -3195.66, 486.235, 152.141, 2217, -1222.59, -619.188, -502.913, 1793.69, 452.434, 1520.99, -1620.46, -388.467, -685.61, 3700.08, 243.876, 1046.31, -5276.1, -220.456, -568.383, -452.512, 956.799, 132.197, 4249.08, -1398.91, -875.679, -2118.2, 820.406, 227.57, 761.349, -1791.68, -938.35, -721.853, 1570.71, 447.044, 323.161, -1278.27 - 433.9, -593.629, 1609.77, 975.329, 451.199, 437.36, -294.852, -251.367, -3841.07, 1149.21, 438.694, 417.559, -18.1652, -930.952, -1121.65, 1592.82, 404.776, 749.139, -2124.92, -625.919, -769.419, 2708.13, 892.633, 1139.81, -9739.32, -144.816, -789.776, -6420.47, 1133.46, 984.21, 5035.8, -451.263, -763.114, -1406.61, 298.74, 491.926, 1075.89, -1559.92 - 726.022, -1102.39, 1606.23, 514.722, 200.614, -4105.2, -832.632, -849.312, 883.561, 610.372, 535.332, 4050.71, -622.698, -382.354, -4251.72, 480.585, 628.869, 1909.26, -1336.47, -300.423, -752.288, 1484.37, 568.556, 589.278, -1123.72, -316.448, -1179.96, 2510.5, 845.938, 845.039, -7183.93, -984.285, -353.704, -8042.07, 898.322, 479.929, 3470.05, -714.878, -479.652, -2230.62, 664.04, 283.598, 575.833, -1811.04, -637.399, -108.824, 1626.16, 609.52, 52.9411, -1811.12, -946.628, -487.983, 4981.11, 522.331, 82.7711, 31443, -158.913, -955.801, -5416.81, 1267.3, 924.277, 2135.96, -257.365, -200.325, -2228.96, 1736.21, 996.35, 1705.1, -1972.52, -824.626, -991.856, 736.061, 99.7457, 1200.94, -3909.07, -93.3458 - 398.498, -4073.02, 824.765, 409.465, 3325.95, -1261.16, -110.886, -1480.55, 1180.94, 180.383, 967.255, -1688.41, -412.064, -626.927, 429.986, 667.447, 13.495, -1259.97, -219.876 - 446.828, 4586.17, 227.95, 354.721, 53825.1, -445.915, -350.923, -1653.46, 1094.81, 622.274, 2468.25, -1397.34, -947.338, -1912.05, 1764.07, 667.026, 1287.19, -558.673, -128.45, -227.172, 3575.68, 687.086, 1211.05, -1637.82, -465.035, -318.782, -90091, 96.5334, 691.458, 577.438, -387.308, -1012.33, -2369.26, 1300.36, 631.321, 925.215, -410.862, -299, -1184, 58100.919, 907.074, 1090.85, -1050.44, -197.88, -695.069, 4054.15, 229.382, 692.446, -183804, -398.166, -806.67, -1133.81, 1308.4, 4.17689, 1377.51, -1164.55, -276.12, -1901.71, 1551.79, 255.01, 1614.09, -334.743, -584.136, -1366.52, 3398.73, 212.962, 830.172, -3675.11, -550.967 - 734.83, 72218.2, 888.537, 360.747, 2024.48, -1233.29, -211.504, -757.65, 758.666, 794.057, 52.5056, -1516.74, -868.136, -1005.15, 437.292, 878.732, 1418.48, -3186.73, -516.076, -48.5088, 4956.43, 819.998, 299.05, -13675.2, -390.279, -147.802, -5438.51, 1154.2, 791.681, 2197.06, -1107.6, -373.266, -1350.08, 888.922, 46.0163, 1521.99, -1810.66, -250.656, -1563.25, 980.419, 34.1171, 493.091, -2893.79, -274.474, -1082.11, 22125.3, 145.718, 169.651, 9025.23, -1255.3, -197.964, -629.231, 1071.99, 442.922, 1198.95, -726.602, -921.579, -901, 694678.419, 28.1585, 43.102, -157.502, -771.558, -761.484, 4998.33, 858.231, 850.756, -17540.3 - 49.8647, -43.7224, -19.6936, 547.14, 425.618, 2075.29, -991.976, -658.341, -1432.83, 275.55, 151.148, 1064.64, -293.862, -340.611, -1117.04, 659.836, 130.712, 696.059, -3325.24 - 52.7743, -1184.04, 5852.91, 494.934, 386.281, 3612.01, -224.695, -953.416, -1024.41, 1401.32, 967.282, 786.901, -628.174, -989.397, -590.083, 1713.9, 745.916, 235.093, -2480.6, -400.552, -949.936, 1718.53, 580.638, 703.344, -14357.1, -266.311, -295.299, -500.421, 453.884, 124.334, 102.811, -1088.27, -82.708, -860.686, 321.275, 425.818, 2044.61, -778.072, -679.151, -386.455, 2014.46, 641.633, 736.21, -276.013, -656.747, -209.018, 3088.88, 408.921, 354.677, 5139.4, -125.233, -368.876, -3375.55, 1408.79, 937.065, 1573.81, -965.734, -530.33, -1973.36, 604.841, 648.623, 1620.89, -145.371, -81.8381, -894.391, 2756.04, 913.631, 785.262, -4149.15, -1007.14, -244.451, -5356.33, 636.965, 96.2691, 1995.9, -672.926, -625.246, -2829.71, 312.1, 274.872, 752.758, -1315.64, -621.19, -732.259, 2748.53, 906.708, 483.404, -2529.05, -818.238, -358.089, 10188.1, 471.777, 695.658, 4526.28, -1049.38, -254.374, -1036.64, 82.172, 222.876, 1550.39, -1542.62, -786.079, -1882.38, 925.393, 874.23, 1090.45, -786.721, -492.296, -876.089, 2056.64, 801.903, 398.64, -5073.45, -820.949, -115.375, -9443.79, 759.012, 471.755, 132.226, -535.809, -76.1648, -715.266, 253.402, 684.243, 1081.34, -712.301, -270.264, -1211.54, 1110.33, 853.691, 828.911, -1506.11, -656.889 - 1015.09, 1701.99, 949.517, 499.833, 11619.5, -832.395, -421.565, -1618.88, 1083.24, 58.7966, 362.351, -831.616, -157.89, -1281.19, 962.313, 947.592, 1669.3, -601.948, -21.3331, -789.73, 2964.76, 56.8603, 38.6275, -887.302, -362.724, -94.4307, -16691, 625.936, 2.16984, 1345.7, -188.799, -822.964, -1307.59, 533.657, 583.863, 495.354, -40.5545, -970.341, -1532.71, 2071.89, 384.418, 1450.71, -2653.39, -562.77, -1172.44, 1476.01, 536.73, 242.619, 34396.1, -1033.35, -810.229, -3062.64, 1227.44, 131.613, 3161.03, -368.64, -564.33, -1892.98, 199.858, 563.088, 88.2782, -609.938, -720.11, -1207.09, 3502.05, 304.683, 489.956, -7459.57, -679.415 - 694.135, -58109.3, 1190.28, 1003.59, 5220.77, -1178.99, -853.947, -3362.08, 1108.25, 30.2665, 219.275, -1077.16, -126.005, -1082.75, 1190.78, 255.888, 822.389, -268.875, -849.974 - 938.592, 1308.51, 415.44, 903.034, 177532, -104.874, -1008.66, -4881.73, 970.897, 306.201, 59.9427, -529.303, -237.378, -329.254, 1278.79, 153, 1745.48, -1376.74, -331.313, -1415.24, 1025.66, 739.439, 23.877, -1490.8, -917.517, -1147.74, 12260.4, 106.649, 945.536, 951.144, -1189.9, -596.256, -2402.72, 958.565, 692.832, 1933.7, -133.265, -604.024, -1597.28, 1897.54, 252.217, 1341.84, -1721.44, -503.832, -8.0212, 1263.68, 698.539, 1137.63, -8997.51, -1139.52, -250.092, -5965.42, 884.444, 624.047, 3679.88, -1296.88, -567.186, -90.0157, 1720.21, 770.121, 986.158, -488.163, -344.639, -831.123, 651.921, 392.754, 432.548, -1655.93 - 1071.54, -207.41, 19245.5, 274.245, 44.4523, 2375.75, -93.3708, -417.894, -3216.51, 93.534, 351.967, 2424.7, -53.333, -573.203, -1379.13, 134.031, 525.47, 74.2176, -2989.52, -84.775, -590.911, 1350.59, 221.312, 1157.35, -14274.1, -1046.82, -542.445, -5800.92, 357.914, 167.429, 1050.18, -385.256, -693.848, -106.87, 1488.24, 723.455, 635.138, -606.97, -122.69, -245.85, 1055.17, 846.851, 625.914, -2022.28, -807.419, -208.727, 19457.8, 311.939, 244.401, 6904.65, -898.668, -689.656, -3872.97, 1321.14, 975.815, 1938.99, -1396.76, -797.783, -1432.86, 184.201, 309.463, 539.168, -2141.98, -1019.96, -519.297, 4746.59, 770.064, 63.8706, -3509.58 - 218.044, -629.546, -5457.52, 12.6944, 16.9498, 964.268, -157.301, -549.387, -0, 646.975, 109.154, 107.11, -174.613, -114.447, -551.836, 2959.11, 437.523, 93.3249, -742.902, -239.336, -972.837, 4013.01, 610.668, 138.035, 3349.25, -1103.16, -903.289, -800.243, 843.708, 259.358, 974.963, -221.501, -814.566, -1759.36, 1047.26, 181.575, 133.778, -1760.32, -737.975, -608.375, 4754.5, 193.599, 605.918, -6250.27, -338.097, -937.862, -5381.22, 904.159, 950.986, 2562.24, -420.922, -32.7361, -382.079, 302.406, 507.273, 865.739, -118.876, -709.774, -994.299, 2847.34, 984.097, 420.986, -2244.49, -827.269, -192.876, 12987.5, 351.243, 670.539, 14068.6, -475.225, -22.4631, -1288.8, 790.91, 881.5, 1991.77, -348.415, -687.183, -182.369, 584.927, 931.783, 1674.29, -1623.37, -320.613, -680.792, 518.253, 871.361, 1124.73, -6246.32, -597.349, -963.147, -9144.39, 605.639, 145.971, 1820.71, -860.692, -660.416, -1008.74, 1514.81, 584.291, 1339.09, -626.325, -956.344, -1520.2, 612.452, 830.681, 822.712, -1880, -903.588, -10.1567, 7774.62, 881.746, 403.82, 13526, -119.13, -890.744, -666.523, 371.465, 73.0775, 1998.62, -240.481, -914.336, -1158.18, 1271.33, 398.389, 1539.19, -1624.1, -399.879, -840.592, 3692.23, 1030.74, 254.419, -5429.03, -1043.67, -100.896, -19556.8, 120.829, 710.183, 3138.49, -1303.69, -17.5359, -2019.9, 1173.16, 370.088, 665.189, -360.604, -195.122, -1362.18, 2097.55, 270.217, 629.451, -3821.69, -555.962, -396.586, 5367.63, 310.264, 229.669, 17970.1, -815.156, -839.738, -2592.81, 0, 336.012, 3227.2, -446.803 - 414.746, -288.596, 737.669, 421.147, 17970.1, -815.156, -839.738, -2592.81, 0, 336.012, 3227.2, -446.803 - 414.746, -288.596, 737.669, 421.147, 0, 336.012, 3227.2}},


       { "negative double Kononenko", NegativeDuobleGenerateData(10) },
       { "semi-sorted double Kononenko", SemiSortedDoubleGenerateData(100) },
       { "full-sorted double Kononenko", FullSortedDoubleGenerateData(1000) },
    };
}