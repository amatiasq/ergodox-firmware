/* ----------------------------------------------------------------------------
 * USB Keyboard Key Codes (usage page 0x07)
 *
 * Taken from [the HID Usage Tables pdf][1], Section 10,
 * which can be found on [the HID Page][2] at <http://www.usb.org>
 *
 * - `Boot Keyboard Req.` indicates that the usage code is one that should be
 *   supported by the listed types of keyboards (104-key, ...) on boot
 *
 * - `ES_KEY_` indicates a Keyboard key
 * - `ES_KEYPAD_` indicates a Keypad key
 * - Multiple names concatenated in CamelCase indicate a single value
 * - Multiple names separated by `_`s indicate shifted or alternate values
 *
 * [1]: http://www.usb.org/developers/devclass_docs/Hut1_12v2.pdf
 * [2]: http://www.usb.org/developers/hidpage
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef USB_USAGE_PAGE_KEYBOARD_SPANISH_h
	#define USB_USAGE_PAGE_KEYBOARD_SPANISH_h
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------


//      Name                        ID    // PC Mac Unix  Boot Keyboard Req.
//      --------------------------- ----     -- --- ----  ---------------------

//      (Reserved)                  0x00  // √  √   √     84/101/104

#define ES_KEY_ErrorRollOver                   0x01  // √  √   √     84/101/104
#define ES_KEY_POSTFail                        0x02  // √  √   √     84/101/104
#define ES_KEY_ErrorUndefined                  0x03  // √  √   √     84/101/104
#define ES_KEY_a_A                             0x04  // √  √   √     84/101/104
#define ES_KEY_b_B                             0x05  // √  √   √     84/101/104
#define ES_KEY_c_C                             0x06  // √  √   √     84/101/104
#define ES_KEY_d_D                             0x07  // √  √   √     84/101/104
#define ES_KEY_e_E_Euro                        0x08  // √  √   √     84/101/104
#define ES_KEY_f_F                             0x09  // √  √   √     84/101/104
#define ES_KEY_g_G                             0x0A  // √  √   √     84/101/104
#define ES_KEY_h_H                             0x0B  // √  √   √     84/101/104
#define ES_KEY_i_I                             0x0C  // √  √   √     84/101/104
#define ES_KEY_j_J                             0x0D  // √  √   √     84/101/104
#define ES_KEY_k_K                             0x0E  // √  √   √     84/101/104
#define ES_KEY_l_L                             0x0F  // √  √   √     84/101/104
#define ES_KEY_m_M                             0x10  // √  √   √     84/101/104
#define ES_KEY_n_N                             0x11  // √  √   √     84/101/104
#define ES_KEY_o_O                             0x12  // √  √   √     84/101/104
#define ES_KEY_p_P                             0x13  // √  √   √     84/101/104
#define ES_KEY_q_Q                             0x14  // √  √   √     84/101/104
#define ES_KEY_r_R                             0x15  // √  √   √     84/101/104
#define ES_KEY_s_S                             0x16  // √  √   √     84/101/104
#define ES_KEY_t_T                             0x17  // √  √   √     84/101/104
#define ES_KEY_u_U                             0x18  // √  √   √     84/101/104
#define ES_KEY_v_V                             0x19  // √  √   √     84/101/104
#define ES_KEY_w_W                             0x1A  // √  √   √     84/101/104
#define ES_KEY_x_X                             0x1B  // √  √   √     84/101/104
#define ES_KEY_y_Y                             0x1C  // √  √   √     84/101/104
#define ES_KEY_z_Z                             0x1D  // √  √   √     84/101/104
#define ES_KEY_1_Exclamation_Pipe              0x1E  // √  √   √     84/101/104
#define ES_KEY_2_DoubleQuotes_At               0x1F  // √  √   √     84/101/104
#define ES_KEY_3_Dot_Numeral                   0x20  // √  √   √     84/101/104
#define ES_KEY_4_Dollar                        0x21  // √  √   √     84/101/104
#define ES_KEY_5_Percent                       0x22  // √  √   √     84/101/104
#define ES_KEY_6_Ampersand_NotSign             0x23  // √  √   √     84/101/104
#define ES_KEY_7_Slash                         0x24  // √  √   √     84/101/104
#define ES_KEY_8_LeftParenthesis               0x25  // √  √   √     84/101/104
#define ES_KEY_9_RightParenthesis              0x26  // √  √   √     84/101/104
#define ES_KEY_0_Equal                         0x27  // √  √   √     84/101/104
#define ES_KEY_ReturnEnter                     0x28  // √  √   √     84/101/104
#define ES_KEY_Escape                          0x29  // √  √   √     84/101/104
#define ES_KEY_DeleteBackspace                 0x2A  // √  √   √     84/101/104
#define ES_KEY_Tab                             0x2B  // √  √   √     84/101/104
#define ES_KEY_Spacebar                        0x2C  // √  √   √     84/101/104
#define ES_KEY_SingleQuote_Question            0x2D  // √  √   √     84/101/104
#define ES_KEY_CloseExclamation_CloseQuestion  0x2E  // √  √   √     84/101/104
#define ES_KEY_GraveAccent_Circumflex_LeftBracket          0x2F  // √  √   √     84/101/104
#define ES_KEY_Plus_Asterisk_RightBracket      0x30  // √  √   √     84/101/104
#define ES_KEY_Cedilla__RightBrace             0x31  // √  √   √     84/101/104
#define ES_KEY_Cedilla__RightBrace_2             0x32  // √  √   √     84/101/104
#define ES_KEY_Enye                            0x33  // √  √   √     84/101/104
#define ES_KEY_AcuteAccent_Diaeresis_LeftBrace 0x34  // √  √   √     84/101/104
#define ES_KEY_Ordinal_OrdinalF_BackSlash      0x35  // √  √   √     84/101/104
#define ES_KEY_Comma_Semicolon                 0x36  // √  √   √     84/101/104
#define ES_KEY_Period_Colon                    0x37  // √  √   √     84/101/104
#define ES_KEY_Slash_Underscore                0x38  // √  √   √     84/101/104
#define ES_KEY_CapsLock                        0x39  // √  √   √     84/101/104
#define ES_KEY_F1                              0x3A  // √  √   √     84/101/104
#define ES_KEY_F2                              0x3B  // √  √   √     84/101/104
#define ES_KEY_F3                              0x3C  // √  √   √     84/101/104
#define ES_KEY_F4                              0x3D  // √  √   √     84/101/104
#define ES_KEY_F5                              0x3E  // √  √   √     84/101/104
#define ES_KEY_F6                              0x3F  // √  √   √     84/101/104
#define ES_KEY_F7                              0x40  // √  √   √     84/101/104
#define ES_KEY_F8                              0x41  // √  √   √     84/101/104
#define ES_KEY_F9                              0x42  // √  √   √     84/101/104
#define ES_KEY_F10                             0x43  // √  √   √     84/101/104
#define ES_KEY_F11                             0x44  // √  √   √        101/104
#define ES_KEY_F12                             0x45  // √  √   √        101/104
#define ES_KEY_PrintScreen                     0x46  // √  √   √        101/104
#define ES_KEY_ScrollLock                      0x47  // √  √   √     84/101/104
#define ES_KEY_Pause                           0x48  // √  √   √        101/104
#define ES_KEY_Insert                          0x49  // √  √   √        101/104
#define ES_KEY_Home                            0x4A  // √  √   √        101/104
#define ES_KEY_PageUp                          0x4B  // √  √   √        101/104
#define ES_KEY_DeleteForward                   0x4C  // √  √   √        101/104
#define ES_KEY_End                             0x4D  // √  √   √        101/104
#define ES_KEY_PageDown                        0x4E  // √  √   √        101/104
#define ES_KEY_RightArrow                      0x4F  // √  √   √        101/104
#define ES_KEY_LeftArrow                       0x50  // √  √   √        101/104
#define ES_KEY_DownArrow                       0x51  // √  √   √        101/104
#define ES_KEY_UpArrow                         0x52  // √  √   √        101/104

#define ES_KEYPAD_NumLock_Clear                0x53  // √  √   √        101/104
#define ES_KEYPAD_Slash                        0x54  // √  √   √        101/104
#define ES_KEYPAD_Asterisk                     0x55  // √  √   √     84/101/104
#define ES_KEYPAD_Minus                        0x56  // √  √   √     84/101/104
#define ES_KEYPAD_Plus                         0x57  // √  √   √     84/101/104
#define ES_KEYPAD_ENTER                        0x58  // √  √   √        101/104
#define ES_KEYPAD_1_End                        0x59  // √  √   √     84/101/104
#define ES_KEYPAD_2_DownArrow                  0x5A  // √  √   √     84/101/104
#define ES_KEYPAD_3_PageDown                   0x5B  // √  √   √     84/101/104
#define ES_KEYPAD_4_LeftArrow                  0x5C  // √  √   √     84/101/104
#define ES_KEYPAD_5                            0x5D  // √  √   √     84/101/104
#define ES_KEYPAD_6_RightArrow                 0x5E  // √  √   √     84/101/104
#define ES_KEYPAD_7_Home                       0x5F  // √  √   √     84/101/104
#define ES_KEYPAD_8_UpArrow                    0x60  // √  √   √     84/101/104
#define ES_KEYPAD_9_PageUp                     0x61  // √  √   √     84/101/104
#define ES_KEYPAD_0_Insert                     0x62  // √  √   √     84/101/104
#define ES_KEYPAD_Period_Delete                0x63  // √  √   √     84/101/104

#define ES_KEY_LowerThan_GreaterThan           0x64  // √  √   √     84/101/104
#define ES_KEY_Application                     0x65  // √  -   √            104
#define ES_KEY_Power                           0x66  // -  √   √     -

#define ES_KEYPAD_Equal                        0x67  // -  √   -     -

#define ES_KEY_F13                             0x68  // -  √   -     -
#define ES_KEY_F14                             0x69  // -  √   -     -
#define ES_KEY_F15                             0x6A  // -  √   -     -
#define ES_KEY_F16                             0x6B  // -  -   -     -
#define ES_KEY_F17                             0x6C  // -  -   -     -
#define ES_KEY_F18                             0x6D  // -  -   -     -
#define ES_KEY_F19                             0x6E  // -  -   -     -
#define ES_KEY_F20                             0x6F  // -  -   -     -
#define ES_KEY_F21                             0x70  // -  -   -     -
#define ES_KEY_F22                             0x71  // -  -   -     -
#define ES_KEY_F23                             0x72  // -  -   -     -
#define ES_KEY_F24                             0x73  // -  -   -     -
#define ES_KEY_Execute                         0x74  // -  -   √     -
#define ES_KEY_Help                            0x75  // -  -   √     -
#define ES_KEY_Menu                            0x76  // -  -   √     -
#define ES_KEY_Select                          0x77  // -  -   √     -
#define ES_KEY_Stop                            0x78  // -  -   √     -
#define ES_KEY_Again                           0x79  // -  -   √     -
#define ES_KEY_Undo                            0x7A  // -  -   √     -
#define ES_KEY_Cut                             0x7B  // -  -   √     -
#define ES_KEY_Copy                            0x7C  // -  -   √     -
#define ES_KEY_Paste                           0x7D  // -  -   √     -
#define ES_KEY_Find                            0x7E  // -  -   √     -
#define ES_KEY_Mute                            0x7F  // -  -   √     -
#define ES_KEY_VolumeUp                        0x80  // -  -   √     -
#define ES_KEY_VolumeDown                      0x81  // -  -   √     -
#define ES_KEY_LockingCapsLock                 0x82  // -  -   √     -
#define ES_KEY_LockingNumLock                  0x83  // -  -   √     -
#define ES_KEY_LockingScrollLock               0x84  // -  -   √     -

#define ES_KEYPAD_Comma                        0x85  // -  -   -     -
#define ES_KEYPAD_EqualSign                    0x86  // -  -   -     -

#define ES_KEY_International1                  0x87  // -  -   -     -
#define ES_KEY_International2                  0x88  // -  -   -     -
#define ES_KEY_International3                  0x89  // -  -   -     -
#define ES_KEY_International4                  0x8A  // -  -   -     -
#define ES_KEY_International5                  0x8B  // -  -   -     -
#define ES_KEY_International6                  0x8C  // -  -   -     -
#define ES_KEY_International7                  0x8D  // -  -   -     -
#define ES_KEY_International8                  0x8E  // -  -   -     -
#define ES_KEY_International9                  0x8F  // -  -   -     -
#define ES_KEY_LANG1                           0x90  // -  -   -     -
#define ES_KEY_LANG2                           0x91  // -  -   -     -
#define ES_KEY_LANG3                           0x92  // -  -   -     -
#define ES_KEY_LANG4                           0x93  // -  -   -     -
#define ES_KEY_LANG5                           0x94  // -  -   -     -
#define ES_KEY_LANG6                           0x95  // -  -   -     -
#define ES_KEY_LANG7                           0x96  // -  -   -     -
#define ES_KEY_LANG8                           0x97  // -  -   -     -
#define ES_KEY_LANG9                           0x98  // -  -   -     -
#define ES_KEY_AlternateErase                  0x99  // -  -   -     -
#define ES_KEY_SysReq_Attention                0x9A  // -  -   -     -
#define ES_KEY_Cancel                          0x9B  // -  -   -     -
#define ES_KEY_Clear                           0x9C  // -  -   -     -
#define ES_KEY_Prior                           0x9D  // -  -   -     -
#define ES_KEY_Return                          0x9E  // -  -   -     -
#define ES_KEY_Separator                       0x9F  // -  -   -     -
#define ES_KEY_Out                             0xA0  // -  -   -     -
#define ES_KEY_Oper                            0xA1  // -  -   -     -
#define ES_KEY_Clear_Again                     0xA2  // -  -   -     -
#define ES_KEY_CrSel_Props                     0xA3  // -  -   -     -
#define ES_KEY_ExSel                           0xA4  // -  -   -     -

//      (Reserved)                    0xA5..        0xAF  // -  -   -     -

#define ES_KEYPAD_00                           0xB0  // -  -   -     -
#define ES_KEYPAD_000                          0xB1  // -  -   -     -

#define ES_KEY_ThousandsSeparator              0xB2  // -  -   -     -
#define ES_KEY_DecimalSeparator                0xB3  // -  -   -     -
#define ES_KEY_CurrencyUnit                    0xB4  // -  -   -     -
#define ES_KEY_CurrencySubunit                 0xB5  // -  -   -     -

#define ES_KEYPAD_LeftParenthesis              0xB6  // -  -   -     -
#define ES_KEYPAD_RightParenthesis             0xB7  // -  -   -     -
#define ES_KEYPAD_LeftBrace                    0xB8  // -  -   -     -
#define ES_KEYPAD_RightBrace                   0xB9  // -  -   -     -

#define ES_KEYPAD_Tab                          0xBA  // -  -   -     -
#define ES_KEYPAD_Backspace                    0xBB  // -  -   -     -
#define ES_KEYPAD_A                            0xBC  // -  -   -     -
#define ES_KEYPAD_B                            0xBD  // -  -   -     -
#define ES_KEYPAD_C                            0xBE  // -  -   -     -
#define ES_KEYPAD_D                            0xBF  // -  -   -     -
#define ES_KEYPAD_E                            0xC0  // -  -   -     -
#define ES_KEYPAD_F                            0xC1  // -  -   -     -
#define ES_KEYPAD_XOR                          0xC2  // -  -   -     -
#define ES_KEYPAD_Caret                        0xC3  // -  -   -     -
#define ES_KEYPAD_Percent                      0xC4  // -  -   -     -
#define ES_KEYPAD_LessThan                     0xC5  // -  -   -     -
#define ES_KEYPAD_GreaterThan                  0xC6  // -  -   -     -
#define ES_KEYPAD_Ampersand                    0xC7  // -  -   -     -
#define ES_KEYPAD_AmpersandAmpersand           0xC8  // -  -   -     -
#define ES_KEYPAD_Pipe                         0xC9  // -  -   -     -
#define ES_KEYPAD_PipePipe                     0xCA  // -  -   -     -
#define ES_KEYPAD_Colon                        0xCB  // -  -   -     -
#define ES_KEYPAD_Pound                        0xCC  // -  -   -     -
#define ES_KEYPAD_Space                        0xCD  // -  -   -     -
#define ES_KEYPAD_At                           0xCE  // -  -   -     -
#define ES_KEYPAD_Exclamation                  0xCF  // -  -   -     -
#define ES_KEYPAD_MemoryStore                  0xD0  // -  -   -     -
#define ES_KEYPAD_MemoryRecall                 0xD1  // -  -   -     -
#define ES_KEYPAD_MemoryClear                  0xD2  // -  -   -     -
#define ES_KEYPAD_MemoryAdd                    0xD3  // -  -   -     -
#define ES_KEYPAD_MemorySubtract               0xD4  // -  -   -     -
#define ES_KEYPAD_MemoryMultiply               0xD5  // -  -   -     -
#define ES_KEYPAD_MemoryDivide                 0xD6  // -  -   -     -
#define ES_KEYPAD_PlusMinus                    0xD7  // -  -   -     -
#define ES_KEYPAD_Clear                        0xD8  // -  -   -     -
#define ES_KEYPAD_ClearEntry                   0xD9  // -  -   -     -
#define ES_KEYPAD_Binary                       0xDA  // -  -   -     -
#define ES_KEYPAD_Octal                        0xDB  // -  -   -     -
#define ES_KEYPAD_Decimal                      0xDC  // -  -   -     -
#define ES_KEYPAD_Hexadecimal                  0xDD  // -  -   -     -

//     (Reserved)                     0xDE..        0xDF  // -  -   -     -

#define ES_KEY_LeftControl                     0xE0  // √  √   √     84/101/104
#define ES_KEY_LeftShift                       0xE1  // √  √   √     84/101/104
#define ES_KEY_LeftAlt                         0xE2  // √  √   √     84/101/104
#define ES_KEY_LeftGUI                         0xE3  // √  √   √            104
#define ES_KEY_RightControl                    0xE4  // √  √   √        101/104
#define ES_KEY_RightShift                      0xE5  // √  √   √     84/101/104
#define ES_KEY_RightAlt                        0xE6  // √  √   √        101/104
#define ES_KEY_RightGUI                        0xE7  // √  √   √            104

//     (Reserved)           0xE8..0xFFFF  // -  -   -     -


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
#endif

