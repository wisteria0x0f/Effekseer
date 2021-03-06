#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_2_0 /EVS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderLighting_VS.h
//    Shader/model_renderer_lighting_VS.fx
//
//
// Parameters:
//
//   float4 fLightColor;
//   float4 fLightDirection;
//   float4 fModelColor[40];
//   float4 fUV[40];
//   float4x4 mCameraProj;
//   float4x4 mModel[40];
//
//
// Registers:
//
//   Name            Reg   Size
//   --------------- ----- ----
//   mCameraProj     c0       4
//   mModel          c4     160
//   fUV             c164    40
//   fModelColor     c204    40
//   fLightDirection c244     1
//   fLightColor     c245     1
//

    vs_2_0
    def c246, 4, 0, 0, 0
    dcl_position v0
    dcl_normal v1
    dcl_texcoord v2
    dcl_blendindices v3
    mul r0.x, v3.x, c246.x
    mova a0.x, r0.x
    mul r0, v0.y, c5[a0.x]
    mad r0, c4[a0.x], v0.x, r0
    mad r0, c6[a0.x], v0.z, r0
    add r0, r0, c7[a0.x]
    mul r1, r0.y, c1
    mad r1, c0, r0.x, r1
    mad r1, c2, r0.z, r1
    mad oPos, c3, r0.w, r1
    mova a0.y, v3.x
    mad oT0.xy, v2, c164[a0.y].zwzw, c164[a0.y]
    mul r0.xyz, v1.y, c5[a0.x]
    mad r0.xyz, c4[a0.x], v1.x, r0
    mad r0.xyz, c6[a0.x], v1.z, r0
    nrm r1.xyz, r0
    dp3 r0.x, c244, r1
    max r0.xyz, r0.x, c246.y
    mov r0.w, c204[a0.y].w
    mul r0, r0, c245
    mul oD0, r0, c204[a0.y]

// approximately 23 instruction slots used
#endif

const BYTE g_vs20_VS[] =
{
      0,   2, 254, 255, 254, 255, 
     88,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  43,   1, 
      0,   0,   0,   2, 254, 255, 
      6,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
     36,   1,   0,   0, 148,   0, 
      0,   0,   2,   0, 245,   0, 
      1,   0, 214,   3, 160,   0, 
      0,   0,   0,   0,   0,   0, 
    176,   0,   0,   0,   2,   0, 
    244,   0,   1,   0, 210,   3, 
    160,   0,   0,   0,   0,   0, 
      0,   0, 192,   0,   0,   0, 
      2,   0, 204,   0,  40,   0, 
     50,   3, 204,   0,   0,   0, 
      0,   0,   0,   0, 220,   0, 
      0,   0,   2,   0, 164,   0, 
     40,   0, 146,   2, 224,   0, 
      0,   0,   0,   0,   0,   0, 
    240,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   2,   0, 
    252,   0,   0,   0,   0,   0, 
      0,   0,  12,   1,   0,   0, 
      2,   0,   4,   0, 160,   0, 
     18,   0,  20,   1,   0,   0, 
      0,   0,   0,   0, 102,  76, 
    105, 103, 104, 116,  67, 111, 
    108, 111, 114,   0,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 102,  76, 105, 103, 
    104, 116,  68, 105, 114, 101, 
     99, 116, 105, 111, 110,   0, 
    102,  77, 111, 100, 101, 108, 
     67, 111, 108, 111, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 102,  85, 
     86,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,  40,   0, 
      0,   0,   0,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,  80, 114, 111, 106,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 109,  77, 
    111, 100, 101, 108,   0, 171, 
      3,   0,   3,   0,   4,   0, 
      4,   0,  40,   0,   0,   0, 
      0,   0,   0,   0, 118, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     81,   0,   0,   5, 246,   0, 
     15, 160,   0,   0, 128,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   3,   0, 
      0, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   2,   0,  15, 144, 
     31,   0,   0,   2,   2,   0, 
      0, 128,   3,   0,  15, 144, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   3,   0,   0, 144, 
    246,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      0,   0,   0, 128,   5,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0,  85, 144,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
      0, 144,   0,   0, 228, 128, 
      4,   0,   0,   5,   0,   0, 
     15, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   0,   0, 
    170, 144,   0,   0, 228, 128, 
      2,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      7,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      1,   0,  15, 128,   0,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 192, 
      3,   0, 228, 160,   0,   0, 
    255, 128,   1,   0, 228, 128, 
     46,   0,   0,   2,   0,   0, 
      2, 176,   3,   0,   0, 144, 
      4,   0,   0,   6,   0,   0, 
      3, 224,   2,   0, 228, 144, 
    164,  32, 238, 160,   0,   0, 
     85, 176, 164,  32, 228, 160, 
      0,   0,  85, 176,   5,   0, 
      0,   4,   0,   0,   7, 128, 
      1,   0,  85, 144,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   0,   0, 
      7, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
      0, 144,   0,   0, 228, 128, 
      4,   0,   0,   5,   0,   0, 
      7, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
    170, 144,   0,   0, 228, 128, 
     36,   0,   0,   2,   1,   0, 
      7, 128,   0,   0, 228, 128, 
      8,   0,   0,   3,   0,   0, 
      1, 128, 244,   0, 228, 160, 
      1,   0, 228, 128,  11,   0, 
      0,   3,   0,   0,   7, 128, 
      0,   0,   0, 128, 246,   0, 
     85, 160,   1,   0,   0,   3, 
      0,   0,   8, 128, 204,  32, 
    255, 160,   0,   0,  85, 176, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
    245,   0, 228, 160,   5,   0, 
      0,   4,   0,   0,  15, 208, 
      0,   0, 228, 128, 204,  32, 
    228, 160,   0,   0,  85, 176, 
    255, 255,   0,   0
};
