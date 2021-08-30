void __thiscall __noreturn StartAddress(void *this, LPVOID lpThreadParameter)//this is good so far so not shit
{
  void *v2; // esp
  int v3; // esi
  __m128i *v4; // edx
  unsigned int v5; // eax
  const CHAR *v6; // eax
  unsigned int v7; // ecx
  __m128i *v8; // edx
  unsigned int v9; // eax
  const CHAR *v10; // eax
  HANDLE v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int128 *v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // [esp-F42F8h] [ebp-F4304h]
  int v18; // [esp-F42F4h] [ebp-F4300h]
  _OWORD v19[2]; // [esp-F42E0h] [ebp-F42ECh] BYREF
  __int64 v20; // [esp-F42C0h] [ebp-F42CCh]
  HANDLE v21; // [esp-F42B4h] [ebp-F42C0h]
  int v22; // [esp-F42B0h] [ebp-F42BCh]
  unsigned int v23[4]; // [esp-F42ACh] [ebp-F42B8h] BYREF
  int v24; // [esp-F429Ch] [ebp-F42A8h]
  unsigned int v25; // [esp-F4298h] [ebp-F42A4h]
  char v26; // [esp-F4294h] [ebp-F42A0h]
  int v27; // [esp-F4284h] [ebp-F4290h]
  int v28; // [esp-F4280h] [ebp-F428Ch]
  DWORD v29; // [esp-F427Ch] [ebp-F4288h] BYREF
  __int128 v30; // [esp-F4278h] [ebp-F4284h] BYREF
  __int64 v31; // [esp-F4268h] [ebp-F4274h]
  char v32; // [esp-F4260h] [ebp-F426Ch] BYREF
  _BYTE v33[1000011]; // [esp-F425Fh] [ebp-F426Bh] BYREF
  int *v34; // [esp-14h] [ebp-20h]
  _OWORD *v35; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *v36; // [esp-Ch] [ebp-18h]
  void *v37; // [esp-8h] [ebp-14h]
  int v38; // [esp-4h] [ebp-10h]
  int v39; // [esp+4h] [ebp-8h]
  int v40; // [esp+8h] [ebp-4h] BYREF
  int retaddr; // [esp+Ch] [ebp+0h]

  v39 = retaddr;
  v38 = -1;
  v37 = &loc_101A0C1B;
  v36 = NtCurrentTeb()->NtTib.ExceptionList;
  v34 = &v40;
  *(_DWORD *)&v33[1000007] = this;
  v2 = alloca(1000124);
  v35 = v19;
  v3 = 0;
  v28 = 15;
  v22 = 0;
  v27 = 0;
  v26 = 0;
  v38 = 0;
  while ( 1 )
  {
    do
    {
      v31 = 0xF00000000i64;
      LOBYTE(v30) = 0;
      sub_10005DF0((unsigned int *)&v30, (int)MultiByteStr, 0);
      LOBYTE(v38) = 1;
      v4 = (__m128i *)sub_10072220();
      if ( v4[5].m128i_i8[6] )
      {
        v5 = 64;
        *v4 = _mm_xor_si128(*v4, (__m128i)xmmword_1025CBA0);
        v4[1] = _mm_xor_si128(v4[1], (__m128i)xmmword_1025CBA0);
        v4[2] = _mm_xor_si128(v4[2], (__m128i)xmmword_1025CBA0);
        v4[3] = _mm_xor_si128(v4[3], (__m128i)xmmword_1025CBA0);
        do
          v4->m128i_i8[v5++] ^= 0x2Fu;
        while ( v5 < 0x57 );
      }
      v24 = 0;
      v25 = 15;
      LOBYTE(v23[0]) = 0;
      sub_10005DF0(v23, (int)v4, strlen(v4->m128i_i8));
      v6 = (const CHAR *)v23;
      if ( v25 >= 0x10 )
        v6 = (const CHAR *)v23[0];
      CreateNamedPipeA(v6, 3u, 0, 1u, 0xF423Fu, 0xF423Fu, 0, 0);//might be the pipe creation
      if ( v25 >= 0x10 )
      {
        v7 = v23[0];
        if ( v25 + 1 >= 0x1000 )
        {
          v7 = *(_DWORD *)(v23[0] - 4);
          if ( v23[0] - v7 - 4 > 0x1F )
            sub_101224EE();
        }
        sub_100A2D53(v7);
      }
      v8 = (__m128i *)sub_10072300();
      if ( v8[7].m128i_i8[9] )
      {
        v9 = 64;
        *v8 = _mm_xor_si128(*v8, (__m128i)xmmword_1025CBA0);
        v8[1] = _mm_xor_si128(v8[1], (__m128i)xmmword_1025CBA0);
        v8[2] = _mm_xor_si128(v8[2], (__m128i)xmmword_1025CBA0);
        v8[3] = _mm_xor_si128(v8[3], (__m128i)xmmword_1025CBA0);
        do
          v8->m128i_i8[v9++] ^= 0x2Fu;
        while ( v9 < 0x7A );
      }
      v24 = 0;
      v25 = 15;
      LOBYTE(v23[0]) = 0;
      sub_10005DF0(v23, (int)v8, strlen(v8->m128i_i8));
      v10 = (const CHAR *)v23;
      if ( v25 >= 0x10 )
        v10 = (const CHAR *)v23[0];
      v11 = CreateNamedPipeA(v10, 3u, 0, 1u, 0xF423Fu, 0xF423Fu, 0, 0);//but why another one?
      v21 = v11;
      if ( v25 >= 0x10 )
      {
        v12 = v23[0];
        if ( v25 + 1 >= 0x1000 )
        {
          v12 = *(_DWORD *)(v23[0] - 4);
          if ( v23[0] - v12 - 4 > 0x1F )
            sub_101224EE();
        }
        sub_100A2D53(v12);
      }
      v24 = 0;
      v25 = 15;
      LOBYTE(v23[0]) = 0;
      while ( v11 != (HANDLE)-1 )
      {
        if ( ConnectNamedPipe(v11, 0) )
        {
          while ( ReadFile(v11, &v32, 0xF423Eu, &v29, 0) )//you can find this in axon pipe creation
          {
            if ( v29 >= 0xF423F )
            {
              sub_100A3552();
              goto LABEL_44;
            }
            *(&v32 + v29) = 0;
            LOBYTE(v38) = 3;
            v13 = &v32 + strlen(&v32) + 1 - v33;
            if ( 0x7FFFFFFF - (int)v31 < v13 )
              sub_10003AB0();
            v14 = &v30;
            if ( HIDWORD(v31) >= 0x10 )
              v14 = (__int128 *)v30;
            sub_10078640(v21, &v30, v14, v31, &v32, v13);
            v3 |= 1u;
            v22 = v3;
            if ( HIDWORD(v31) >= 0x10 )
            {
              v15 = v30;
              if ( (unsigned int)(HIDWORD(v31) + 1) >= 0x1000 )
              {
                v15 = *(_DWORD *)(v30 - 4);
                if ( (unsigned int)(v30 - v15 - 4) > 0x1F )
                  sub_101224EE();
              }
              sub_100A2D53(v15);
            }
            v30 = v19[1];
            v31 = v20;
            v38 = 1;
          }
          sub_10005D30(&v30);// might be some to do with execute..
          sub_10053880(v17, v18);
          sub_10005DF0((unsigned int *)&v30, (int)MultiByteStr, 0);
        }
        DisconnectNamedPipe(v11);
      }
      LOBYTE(v38) = 0;
    }
    while ( HIDWORD(v31) < 0x10 );
    v16 = v30;
    if ( (unsigned int)(HIDWORD(v31) + 1) >= 0x1000 )
    {
      v16 = *(_DWORD *)(v30 - 4);
      if ( (unsigned int)(v30 - v16 - 4) > 0x1F )
LABEL_44:
        sub_101224EE();
    }
    sub_100A2D53(v16);
  }
}
