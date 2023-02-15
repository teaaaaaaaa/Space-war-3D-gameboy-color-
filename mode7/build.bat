C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o Loop.o Loop.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o spriteGraphics.o spriteGraphics.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o backgroundGraphics.o backgroundGraphics.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -c -o triangleMap.o triangleMap.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -o hUGEDriver.o
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o explosionSFX.o explosionSFX.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o laserSFX.o laserSFX.c
C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -Wm-yC -Wl-yt0x1B -Wm-yoA -Wm-ya4 -Wm-yS -Wm-yn"SW3D" -o rom/spaceWar3D.gb Loop.o spriteGraphics.o BGM.c sample_player.c explosionSFX.o laserSFX.o textGraphics.c textMap.c backgroundGraphics.o triangleMap.o hUGEDriver.obj.o
pause
