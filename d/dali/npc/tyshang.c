//Cracked by Roath
// tyshang.c ̨���̷�

inherit NPC;

void create()
{
	set_name("̨���̷�", ({ "shang fan", "fan", "shang" }) );
	set("long", "һλ̨������̷������ڷ���һ��¨�մ������Ļ�����������㡣\n");

	set("age", 25);
	set("gender", "����");
	set("dalivictim",1);

	set("str", 20);
	set("cor", 20);

    set("combat_exp", 1000);
	set("max_qi", 200);
	set("qi", 200);
	set_skill("dodge", 10);
	set_skill("parry", 10);
	set_temp("apply/attack", 10);
	set_temp("apply/damage", 5);
	set_temp("apply/armor", 5);
	
	set("attitude", "peaceful");
	set("shen_type", 1);

	setup();
	carry_object("/d/dali/npc/obj/tyduanqun.c")->wear();
	carry_object("/d/dali/npc/obj/tytoujin.c")->wear();
}