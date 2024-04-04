__int64 __fastcall doBP(int a1, int a2)
{
  char v4[16]; // [xsp+20h] [xbp+20h] BYREF
  char v5[24]; // [xsp+30h] [xbp+30h] BYREF
  char v6[16]; // [xsp+48h] [xbp+48h] BYREF
  char v7[16]; // [xsp+58h] [xbp+58h] BYREF
  char v8[16]; // [xsp+68h] [xbp+68h] BYREF
  char v9[16]; // [xsp+78h] [xbp+78h] BYREF
  char s[64]; // [xsp+88h] [xbp+88h] BYREF
  __int64 v11; // [xsp+C8h] [xbp+C8h]
  __int64 v12; // [xsp+D0h] [xbp+D0h]
  __int64 v13; // [xsp+D8h] [xbp+D8h]
  __int64 v14; // [xsp+E0h] [xbp+E0h]
  __int64 v15; // [xsp+E8h] [xbp+E8h]
  __int64 v16; // [xsp+F0h] [xbp+F0h]
  int v17; // [xsp+FCh] [xbp+FCh]

  if ( a1 == 1 )
  {
    switch ( a2 )
    {
      case 1:
        PatchGL();
        break;
      case 2:
        PatchKR();
        break;
      case 3:
        PatchVN();
        break;
      case 4:
        PatchTW();
        break;
      default:
        exit(1);
    }
    sleep(5u);
  }
  v17 = getPID("com.tencent.ig");
  if ( !v17 )
  {
    v17 = getPID("com.pubg.krmobile");
    if ( !v17 )
    {
      v17 = getPID("com.rekoo.pubgm");
      if ( !v17 )
      {
        v17 = getPID("com.vng.pubgmobile");
        if ( !v17 )
        {
          puts(asc_351A8);
          exit(1);
        }
      }
    }
  }
  snprintf(s, 0x40uLL, "/proc/%d/mem", (unsigned int)v17);
  handle = open(s, 2);
  if ( handle == -1 )
  {
    puts("ERROR");
    exit(1);
  }
  puts("DONE");
  strcpy(v9, "libUE4.so");
  strcpy(v8, "libanogs.so");
  strcpy(v7, "libgcloud.so");
  strcpy(v6, "libanort.so");
  strcpy(v5, "libINTLCompliance.so");
  strcpy(v4, "libswappy.so");
  v16 = get_module_base(v17, v9);
  v15 = get_module_base(v17, v8);
  v14 = get_module_base(v17, v7);
  v13 = get_module_base(v17, v6);
  v12 = get_module_base(v17, v5);
  v11 = get_module_base(v17, v4);
  switch ( a1 )
  {
    case 1:
      WriteBaseAddress_DWORD(v14 + 3772620, 0);
      WriteBaseAddress_DWORD(v14 + 3772632, 0);
      WriteBaseAddress_DWORD(v14 + 3772640, 0);
      WriteBaseAddress_DWORD(v14 + 3772672, 0);
      WriteBaseAddress_DWORD(v14 + 3772716, 0);
      WriteBaseAddress_DWORD(v14 + 3776348, 0);
      WriteBaseAddress_DWORD(v14 + 3776516, 0);
      break;
    case 2:
      WriteBaseAddress_DWORD(v15 + 922048, 0);
      WriteBaseAddress_DWORD(v15 + 922052, 0);
      WriteBaseAddress_DWORD(v15 + 922056, 0);
      WriteBaseAddress_DWORD(v15 + 922060, 0);
      WriteBaseAddress_DWORD(v15 + 922064, 0);
      WriteBaseAddress_DWORD(v15 + 922076, 0);
      WriteBaseAddress_DWORD(v15 + 922080, 0);
      WriteBaseAddress_DWORD(v15 + 922084, 0);
      WriteBaseAddress_DWORD(v15 + 922088, 0);
      WriteBaseAddress_DWORD(v15 + 922136, 0);
      WriteBaseAddress_DWORD(v15 + 912444, 0);
      break;
    case 3:
      WriteBaseAddress_DWORD(v16 + 88856, 0);
      WriteBaseAddress_DWORD(v14 + 3772620, 0);
      WriteBaseAddress_DWORD(v14 + 3772632, 0);
      WriteBaseAddress_DWORD(v14 + 3772640, 0);
      WriteBaseAddress_DWORD(v14 + 3772672, 0);
      WriteBaseAddress_DWORD(v14 + 3772716, 0);
      WriteBaseAddress_DWORD(v14 + 3776348, 0);
      WriteBaseAddress_DWORD(v14 + 3776516, 0);
      break;
    case 4:
      WriteBaseAddress_DWORD(v16 + 88856, 0);
      WriteBaseAddress_DWORD(v15 + 922048, 0);
      WriteBaseAddress_DWORD(v15 + 922052, 0);
      WriteBaseAddress_DWORD(v15 + 922056, 0);
      WriteBaseAddress_DWORD(v15 + 922060, 0);
      WriteBaseAddress_DWORD(v15 + 922064, 0);
      WriteBaseAddress_DWORD(v15 + 922076, 0);
      WriteBaseAddress_DWORD(v15 + 922080, 0);
      WriteBaseAddress_DWORD(v15 + 922084, 0);
      WriteBaseAddress_DWORD(v15 + 922088, 0);
      WriteBaseAddress_DWORD(v15 + 922136, 0);
      WriteBaseAddress_DWORD(v15 + 912444, 0);
      break;
  }
  return close(handle);
}









int __cdecl main(int argc, const char **argv, const char **envp)
{
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDB910", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDB938", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDB960", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDB990", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDB9B0", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDBA10", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDBB00", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDBB70", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDBB90", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.tencent.ig", "libanogs.so", "0xDBC00", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDB910", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDB938", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDB960", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDB990", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDB9B0", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDBA10", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDBB00", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDBB70", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDBB90", "00 00 80 D2 C0 03 5F D6");
  patch_lib_no_backup("com.pubg.krmobile", "libanogs.so", "0xDBC00", "00 00 80 D2 C0 03 5F D6");
  return 0;
}

join @Shadow_Cheatz for more safe bypass
