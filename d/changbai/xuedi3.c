//Cracked by Roath
// Room: xuedi3.c

inherit ROOM;
#include <ansi.h>

void create()
{
	set("short", "ѩ��");
	set("long", @LONG
������һƬ��ãã��ѩ�أ�һ���������߼ʡ�����һ����ӰҲû�У���
��Ļ�ѩ������������֨�����������������һ���¶��Ľ�ӡ������ı���
��Х��������������ʹ��������̫����������ߣ��Ե���ô�԰ס�
LONG
	);

	set("exits", ([
		"west" : __DIR__"xuedi2",
                "north" : __DIR__"chuanc",
	]));

        set("outdoors", "changbai");
        set("cost", 5);

	setup();
	
}

#include "/d/changbai/xuedi.h";