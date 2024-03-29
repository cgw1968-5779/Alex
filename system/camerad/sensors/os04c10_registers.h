#pragma once

const struct i2c_random_wr_payload start_reg_array_os04c10[] = {{0x100, 1}};
const struct i2c_random_wr_payload stop_reg_array_os04c10[] = {{0x100, 0}};

const struct i2c_random_wr_payload init_array_os04c10[] = {
  // OS04C10_AA_00_02_17_wAO_1920x1080_MIPI728Mbps_Linear12bit_20FPS_4Lane_MCLK24MHz
  {0x0103, 0x01},
  {0x0301, 0x84},
  {0x0303, 0x01},
  {0x0305, 0x5b},
  {0x0306, 0x01},
  {0x0307, 0x17},
  {0x0323, 0x04},
  {0x0324, 0x01},
  {0x0325, 0x62},
  {0x3012, 0x06},
  {0x3013, 0x02},
  {0x3016, 0x72},
  {0x3021, 0x03},
  {0x3106, 0x21},
  {0x3107, 0xa1},
  {0x3500, 0x00},
  {0x3501, 0x00},
  {0x3502, 0x40},
  {0x3503, 0x88},
  {0x3508, 0x07},
  {0x3509, 0xc0},
  {0x350a, 0x04},
  {0x350b, 0x00},
  {0x350c, 0x07},
  {0x350d, 0xc0},
  {0x350e, 0x04},
  {0x350f, 0x00},
  {0x3510, 0x00},
  {0x3511, 0x00},
  {0x3512, 0x20},
  {0x3624, 0x00},
  {0x3625, 0x4c},
  {0x3660, 0x00},
  {0x3666, 0xa5},
  {0x3667, 0xa5},
  {0x366a, 0x64},
  {0x3673, 0x0d},
  {0x3672, 0x0d},
  {0x3671, 0x0d},
  {0x3670, 0x0d},
  {0x3685, 0x00},
  {0x3694, 0x0d},
  {0x3693, 0x0d},
  {0x3692, 0x0d},
  {0x3691, 0x0d},
  {0x3696, 0x4c},
  {0x3697, 0x4c},
  {0x3698, 0x40},
  {0x3699, 0x80},
  {0x369a, 0x18},
  {0x369b, 0x1f},
  {0x369c, 0x14},
  {0x369d, 0x80},
  {0x369e, 0x40},
  {0x369f, 0x21},
  {0x36a0, 0x12},
  {0x36a1, 0x5d},
  {0x36a2, 0x66},
  {0x370a, 0x00},
  {0x370e, 0x0c},
  {0x3710, 0x00},
  {0x3713, 0x00},
  {0x3725, 0x02},
  {0x372a, 0x03},
  {0x3738, 0xce},
  {0x3748, 0x00},
  {0x374a, 0x00},
  {0x374c, 0x00},
  {0x374e, 0x00},
  {0x3756, 0x00},
  {0x3757, 0x0e},
  {0x3767, 0x00},
  {0x3771, 0x00},
  {0x377b, 0x20},
  {0x377c, 0x00},
  {0x377d, 0x0c},
  {0x3781, 0x03},
  {0x3782, 0x00},
  {0x3789, 0x14},
  {0x3795, 0x02},
  {0x379c, 0x00},
  {0x379d, 0x00},
  {0x37b8, 0x04},
  {0x37ba, 0x03},
  {0x37bb, 0x00},
  {0x37bc, 0x04},
  {0x37be, 0x08},
  {0x37c4, 0x11},
  {0x37c5, 0x80},
  {0x37c6, 0x14},
  {0x37c7, 0x08},
  {0x37da, 0x11},
  {0x381f, 0x08},
  {0x3829, 0x03},
  {0x3881, 0x00},
  {0x3888, 0x04},
  {0x388b, 0x00},
  {0x3c80, 0x10},
  {0x3c86, 0x00},
  {0x3c8c, 0x20},
  {0x3c9f, 0x01},
  {0x3d85, 0x1b},
  {0x3d8c, 0x71},
  {0x3d8d, 0xe2},
  {0x3f00, 0x0b},
  {0x3f06, 0x04},
  {0x400a, 0x01},
  {0x400b, 0x50},
  {0x400e, 0x08},
  {0x4043, 0x7e},
  {0x4045, 0x7e},
  {0x4047, 0x7e},
  {0x4049, 0x7e},
  {0x4090, 0x14},
  {0x40b0, 0x00},
  {0x40b1, 0x00},
  {0x40b2, 0x00},
  {0x40b3, 0x00},
  {0x40b4, 0x00},
  {0x40b5, 0x00},
  {0x40b7, 0x00},
  {0x40b8, 0x00},
  {0x40b9, 0x00},
  {0x40ba, 0x00},
  {0x4301, 0x00},
  {0x4303, 0x00},
  {0x4502, 0x04},
  {0x4503, 0x00},
  {0x4504, 0x06},
  {0x4506, 0x00},
  {0x4507, 0x64},
  {0x4803, 0x00},
  {0x480c, 0x32},
  {0x480e, 0x00},
  {0x4813, 0x00},
  {0x4819, 0x70},
  {0x481f, 0x30},
  {0x4823, 0x3f},
  {0x4825, 0x30},
  {0x4833, 0x10},
  {0x484b, 0x07},
  {0x488b, 0x00},
  {0x4d00, 0x04},
  {0x4d01, 0xad},
  {0x4d02, 0xbc},
  {0x4d03, 0xa1},
  {0x4d04, 0x1f},
  {0x4d05, 0x4c},
  {0x4d0b, 0x01},
  {0x4e00, 0x2a},
  {0x4e0d, 0x00},
  {0x5001, 0x09},
  {0x5004, 0x00},
  {0x5080, 0x04},
  {0x5036, 0x00},
  {0x5180, 0x70},
  {0x5181, 0x10},
  {0x520a, 0x03},
  {0x520b, 0x06},
  {0x520c, 0x0c},
  {0x580b, 0x0f},
  {0x580d, 0x00},
  {0x580f, 0x00},
  {0x5820, 0x00},
  {0x5821, 0x00},
  {0x301c, 0xf8},
  {0x301e, 0xb4},
  {0x301f, 0xd0},
  {0x3022, 0x01},
  {0x3109, 0xe7},
  {0x3600, 0x00},
  {0x3610, 0x65},
  {0x3611, 0x85},
  {0x3613, 0x3a},
  {0x3615, 0x60},
  {0x3621, 0x90},
  {0x3620, 0x0c},
  {0x3629, 0x00},
  {0x3661, 0x04},
  {0x3664, 0x70},
  {0x3665, 0x00},
  {0x3681, 0xa6},
  {0x3682, 0x53},
  {0x3683, 0x2a},
  {0x3684, 0x15},
  {0x3700, 0x2a},
  {0x3701, 0x12},
  {0x3703, 0x28},
  {0x3704, 0x0e},
  {0x3706, 0x4a},
  {0x3709, 0x4a},
  {0x370b, 0xa2},
  {0x370c, 0x01},
  {0x370f, 0x04},
  {0x3714, 0x24},
  {0x3716, 0x24},
  {0x3719, 0x11},
  {0x371a, 0x1e},
  {0x3720, 0x00},
  {0x3724, 0x13},
  {0x373f, 0xb0},
  {0x3741, 0x4a},
  {0x3743, 0x4a},
  {0x3745, 0x4a},
  {0x3747, 0x4a},
  {0x3749, 0xa2},
  {0x374b, 0xa2},
  {0x374d, 0xa2},
  {0x374f, 0xa2},
  {0x3755, 0x10},
  {0x376c, 0x00},
  {0x378d, 0x30},
  {0x3790, 0x4a},
  {0x3791, 0xa2},
  {0x3798, 0x40},
  {0x379e, 0x00},
  {0x379f, 0x04},
  {0x37a1, 0x10},
  {0x37a2, 0x1e},
  {0x37a8, 0x10},
  {0x37a9, 0x1e},
  {0x37ac, 0xa0},
  {0x37b9, 0x01},
  {0x37bd, 0x01},
  {0x37bf, 0x26},
  {0x37c0, 0x11},
  {0x37c2, 0x04},
  {0x37cd, 0x19},
  {0x37e0, 0x08},
  {0x37e6, 0x04},
  {0x37e5, 0x02},
  {0x37e1, 0x0c},
  {0x3737, 0x04},
  {0x37d8, 0x02},
  {0x37e2, 0x10},
  {0x3739, 0x10},
  {0x3662, 0x10},
  {0x37e4, 0x20},
  {0x37e3, 0x08},
  {0x37d9, 0x08},
  {0x4040, 0x00},
  {0x4041, 0x07},
  {0x4008, 0x02},
  {0x4009, 0x0d},
  {0x3800, 0x01},
  {0x3801, 0x80},
  {0x3802, 0x00},
  {0x3803, 0xdc},
  {0x3804, 0x09},
  {0x3805, 0x0f},
  {0x3806, 0x05},
  {0x3807, 0x23},
  {0x3808, 0x07},
  {0x3809, 0x80},
  {0x380a, 0x04},
  {0x380b, 0x38},
  {0x380c, 0x04},
  {0x380d, 0x2e},
  {0x380e, 0x12},
  {0x380f, 0x70},
  {0x3811, 0x08},
  {0x3813, 0x08},
  {0x3814, 0x01},
  {0x3815, 0x01},
  {0x3816, 0x01},
  {0x3817, 0x01},
  {0x3820, 0x88},
  {0x3821, 0x00},
  {0x3880, 0x25},
  {0x3882, 0x20},
  {0x3c91, 0x0b},
  {0x3c94, 0x45},
  {0x3cad, 0x00},
  {0x3cae, 0x00},
  {0x4000, 0xf3},
  {0x4001, 0x60},
  {0x4003, 0x40},
  {0x4300, 0xff},
  {0x4302, 0x0f},
  {0x4305, 0x83},
  {0x4505, 0x84},
  {0x4809, 0x1e},
  {0x480a, 0x04},
  {0x4837, 0x15},
  {0x4c00, 0x08},
  {0x4c01, 0x08},
  {0x4c04, 0x00},
  {0x4c05, 0x00},
  {0x5000, 0xf9},
  {0x3c8c, 0x10},
};
