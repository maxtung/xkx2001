//Cracked by Roath
// dpboss �����ϰ� 
// Ssy

#include <ansi.h>
inherit NPC;
inherit F_DEALER;

void create()
{
	set_name("�����ϰ�", ({ "dangpu boss", "boss" }));
        set_color("$YEL$");
	set("shen_type", 0);

	set("gender", "����");
	set_max_encumbrance(100000000);
	set("age", 35);
	set("long",
		"һ�����ֺ��ӡ�\n");
	set("no_get_from", 1);

	set_skill("unarmed", 60);
	set_skill("dodge", 60);
	set("jing", 100000);
	set("max_jing", 100000);
	set_temp("apply/attack", 30);
	set_temp("apply/attack", 30);
	set_temp("apply/damage", 15);

	set("combat_exp", 50000);
	set("attitude", "friendly");
	
	setup();
}

void init()
{
	::init();
        add_action("do_list", "list");
        add_action("do_buy", "buy");
	add_action("do_sell", "sell");
	add_action("do_value", "value");
}

void unconcious()
{
	message_vision("\nͻȻ��ֻ��$N����������̨��һ�����ţ����˽�ȥ���������߰��������ˡ�\n",
		this_object());
	destruct(this_object());
}


