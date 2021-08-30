// commented for u skid to learn so enjoy :D
int __stdcall sub_10002A50(HMODULE hModule, int a2, int a3)//entry void
{
  HMODULE v3; // eax
  void *v4; // ecx
  int v5; // ecx
  int v6; // esi
  void *v7; // ecx
  int Buf[4]; // [esp+8h] [ebp-230h] BYREF
  int v10; // [esp+18h] [ebp-220h]
  unsigned int v11; // [esp+1Ch] [ebp-21Ch]
  CHAR Filename[264]; // [esp+20h] [ebp-218h] BYREF
  CHAR Src[268]; // [esp+128h] [ebp-110h] BYREF

  if ( a2 == 1 )
  {
    GetModuleFileNameA(hModule, Filename, 0x104u);//probably just checks for file
    v3 = GetModuleHandleA(0);//probably just checks for file
    GetModuleFileNameA(v3, Src, 0x104u);//probably just checks for file
    v10 = 0;
    v11 = 15;
    LOBYTE(Buf[0]) = 0;
    sub_100037B0(Buf, Filename);//Whatever the file name is.
    if ( v11 >= 0x10 )
    {
      v4 = (void *)Buf[0];
      if ( v11 + 1 >= 0x1000 )
      {
        v4 = *(void **)(Buf[0] - 4);
        if ( (unsigned int)(Buf[0] - (_DWORD)v4 - 4) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      sub_1000412F(v4);//random?
    }
    v10 = 0;
    v11 = 15;
    LOBYTE(Buf[0]) = 0;
    sub_100037B0(Buf, Src);
    v6 = sub_10003050(Buf, (int)"CocoZ4.exe", v5);//detect if CocoZ4.exe exists
    if ( v11 >= 0x10 )
    {
      v7 = (void *)Buf[0];
      if ( v11 + 1 >= 0x1000 )
      {
        v7 = *(void **)(Buf[0] - 4);
        if ( (unsigned int)(Buf[0] - (_DWORD)v7 - 4) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      sub_1000412F(v7);
    }
    if ( v6 == -1 )//deosnt exist
    {
      MessageBoxA(0, "only for coco :nocat:", "bogie for president 3045 :yescat:", 0);//cringe message president? 
      exit(0);
    }
  }
  return 1;
}
