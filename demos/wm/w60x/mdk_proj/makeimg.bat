@rem ����0: exe
@rem ����1: ����bin�ļ� ,ԭʼ�ļ�����ѹ�����ļ�
@rem ����2 :����ļ� 
@rem ����3:  �����ļ�����,0��image�ļ���1��FLASHBOOT�ļ� 2��secboot�ļ�
@rem ����4: �Ƿ�ѹ���ļ���0��plain�ļ���1��ѹ�������ļ�
@rem ����5: �汾���ļ���ִ����exe֮��汾�Ż��Զ��ۼ�
@rem ����6�����λ��
@rem ����7��ԭʼbin�ļ�
@rem ����8��ѹ���ļ��Ľ�ѹλ��

@echo off

@mkdir ..\Bin
copy helloworld.map ..\Bin\WM_W600.map
copy objs\helloworld.bin ..\Bin\WM_W600.bin
cd ..\Bin

copy ..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\version.txt ..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\version_bk.txt
..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Tools\wm_gzip.exe "WM_W600.bin"
..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Tools\makeimg.exe "WM_W600.bin" "WM_W600.img" 0 0 "..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\version.txt" 90000 10100
..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Tools\makeimg.exe "WM_W600.bin.gz" "WM_W600_GZ.img" 0 1 "..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\version.txt" 90000 10100 "WM_W600.bin" 
..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Tools\makeimg.exe "WM_W600.bin" "WM_W600_SEC.img" 0 0 "..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\version.txt" 90000 10100
..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Tools\makeimg_all.exe "..\..\..\..\lib\third_party\mcu_vendor\wm\w60x\Bin\secboot.img" "WM_W600.img" "WM_W600.FLS"
@del "WM_W600.img"
