//Cracked by Roath
// /d/changbai/npc/juren1.c

inherit NPC;

void create()
{
        set_name("���״�", ({ "da hu", "ju ren" }));
        set("nickname", "����");
        set("long",
"�����Ǻ��״󻢣����ɶ����������ϡ�\n"
"�߳��������ģ��ȳ�������Ҫ������ͷ�����Ӵ�׳��ʵ��ʵ�Ǻ����ľ��ˡ�\n");

        set("gender", "����");
        set("age", 25);
        set("attitude", "heroism");
        set("shen_type", -1);

        set("str", 50);
        set("int", 10);
        set("con", 40);
        set("dex", 15);

        set("max_qi", 800);
        set("max_jing", 300);

        set_temp("apply/damage", 60);
        set_temp("apply/attack", 40);

        set("combat_exp", 50000);

        set_skill("parry", 50);
        set_skill("dodge", 30);
        set_skill("unarmed", 60);

        set_skill("force", 60);

        setup();
}