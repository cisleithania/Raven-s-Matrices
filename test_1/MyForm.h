#pragma once
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "file.h"
#include "code_0.h"
#include "code_1.h"
#include "code_2.h"

#include "array_2.h"
#include "raven_time.h"
#include "Arr.h"

namespace test_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	

	public ref class MyForm : public System::Windows::Forms::Form
	{
		////////////////////////////
		static int sec = 0;
		static int min = 0;

			 String^ Second;


	private: System::Windows::Forms::Timer^  timer2;
			 String^ Minute;

	    static double sec1 = 0;
		static double min1 = 0;
		String^ Second1;
		////////////////////////////

	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::TabPage^  tabPage17;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::TabPage^  tabPage18;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::TabPage^  tabPage19;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::TabPage^  tabPage20;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Button^  button107;
	private: System::Windows::Forms::Button^  button108;
	private: System::Windows::Forms::Button^  button109;
	private: System::Windows::Forms::Button^  button110;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::TabPage^  tabPage21;
	private: System::Windows::Forms::Button^  button111;
	private: System::Windows::Forms::Button^  button112;
	private: System::Windows::Forms::Button^  button113;
	private: System::Windows::Forms::Button^  button114;
	private: System::Windows::Forms::Button^  button115;
	private: System::Windows::Forms::Button^  button116;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::TabPage^  tabPage22;
	private: System::Windows::Forms::Button^  button117;
	private: System::Windows::Forms::Button^  button118;
	private: System::Windows::Forms::Button^  button119;
	private: System::Windows::Forms::Button^  button120;
	private: System::Windows::Forms::Button^  button121;
	private: System::Windows::Forms::Button^  button122;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::TabPage^  tabPage23;
	private: System::Windows::Forms::Button^  button123;
	private: System::Windows::Forms::Button^  button124;
	private: System::Windows::Forms::Button^  button125;
	private: System::Windows::Forms::Button^  button126;
	private: System::Windows::Forms::Button^  button127;
	private: System::Windows::Forms::Button^  button128;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::TabPage^  tabPage24;
	private: System::Windows::Forms::Button^  button129;
	private: System::Windows::Forms::Button^  button130;
	private: System::Windows::Forms::Button^  button131;
	private: System::Windows::Forms::Button^  button132;
	private: System::Windows::Forms::Button^  button133;
	private: System::Windows::Forms::Button^  button134;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::TabPage^  tabPage25;
	private: System::Windows::Forms::Button^  button135;
	private: System::Windows::Forms::Button^  button136;
	private: System::Windows::Forms::Button^  button137;
	private: System::Windows::Forms::Button^  button138;
	private: System::Windows::Forms::Button^  button139;
	private: System::Windows::Forms::Button^  button140;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::TabPage^  tabPage26;
	private: System::Windows::Forms::Button^  button141;
	private: System::Windows::Forms::Button^  button142;
	private: System::Windows::Forms::Button^  button143;
	private: System::Windows::Forms::Button^  button144;
	private: System::Windows::Forms::Button^  button145;
	private: System::Windows::Forms::Button^  button146;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::TabPage^  tabPage27;
	private: System::Windows::Forms::TabPage^  tabPage28;


































private: System::Windows::Forms::Button^  button153;
private: System::Windows::Forms::Button^  button154;
private: System::Windows::Forms::Button^  button147;
private: System::Windows::Forms::Button^  button148;
private: System::Windows::Forms::Button^  button149;
private: System::Windows::Forms::Button^  button150;
private: System::Windows::Forms::Button^  button151;
private: System::Windows::Forms::Button^  button152;
private: System::Windows::Forms::PictureBox^  pictureBox25;
private: System::Windows::Forms::Button^  button155;
private: System::Windows::Forms::Button^  button156;
private: System::Windows::Forms::Button^  button157;
private: System::Windows::Forms::Button^  button158;
private: System::Windows::Forms::Button^  button159;
private: System::Windows::Forms::Button^  button160;
private: System::Windows::Forms::Button^  button161;
private: System::Windows::Forms::Button^  button162;
private: System::Windows::Forms::PictureBox^  pictureBox26;
private: System::Windows::Forms::TabPage^  tabPage29;
private: System::Windows::Forms::Button^  button163;
private: System::Windows::Forms::Button^  button164;
private: System::Windows::Forms::Button^  button165;
private: System::Windows::Forms::Button^  button166;
private: System::Windows::Forms::Button^  button167;
private: System::Windows::Forms::Button^  button168;
private: System::Windows::Forms::Button^  button169;
private: System::Windows::Forms::Button^  button170;
private: System::Windows::Forms::PictureBox^  pictureBox27;
private: System::Windows::Forms::TabPage^  tabPage30;
private: System::Windows::Forms::Button^  button171;
private: System::Windows::Forms::Button^  button172;
private: System::Windows::Forms::Button^  button173;
private: System::Windows::Forms::Button^  button174;
private: System::Windows::Forms::Button^  button175;
private: System::Windows::Forms::Button^  button176;
private: System::Windows::Forms::Button^  button177;
private: System::Windows::Forms::Button^  button178;
private: System::Windows::Forms::PictureBox^  pictureBox28;
private: System::Windows::Forms::TabPage^  tabPage31;
private: System::Windows::Forms::Button^  button179;
private: System::Windows::Forms::Button^  button180;
private: System::Windows::Forms::Button^  button181;
private: System::Windows::Forms::Button^  button182;
private: System::Windows::Forms::Button^  button183;
private: System::Windows::Forms::Button^  button184;
private: System::Windows::Forms::Button^  button185;
private: System::Windows::Forms::Button^  button186;
private: System::Windows::Forms::PictureBox^  pictureBox29;
private: System::Windows::Forms::TabPage^  tabPage32;
private: System::Windows::Forms::Button^  button187;
private: System::Windows::Forms::Button^  button188;
private: System::Windows::Forms::Button^  button189;
private: System::Windows::Forms::Button^  button190;
private: System::Windows::Forms::Button^  button191;
private: System::Windows::Forms::Button^  button192;
private: System::Windows::Forms::Button^  button193;
private: System::Windows::Forms::Button^  button194;
private: System::Windows::Forms::PictureBox^  pictureBox30;
private: System::Windows::Forms::TabPage^  tabPage33;
private: System::Windows::Forms::Button^  button195;
private: System::Windows::Forms::Button^  button196;
private: System::Windows::Forms::Button^  button197;
private: System::Windows::Forms::Button^  button198;
private: System::Windows::Forms::Button^  button199;
private: System::Windows::Forms::Button^  button200;
private: System::Windows::Forms::Button^  button201;
private: System::Windows::Forms::Button^  button202;
private: System::Windows::Forms::PictureBox^  pictureBox31;
private: System::Windows::Forms::TabPage^  tabPage34;
private: System::Windows::Forms::Button^  button203;
private: System::Windows::Forms::Button^  button204;
private: System::Windows::Forms::Button^  button205;
private: System::Windows::Forms::Button^  button206;
private: System::Windows::Forms::Button^  button207;
private: System::Windows::Forms::Button^  button208;
private: System::Windows::Forms::Button^  button209;
private: System::Windows::Forms::Button^  button210;
private: System::Windows::Forms::PictureBox^  pictureBox32;
private: System::Windows::Forms::TabPage^  tabPage35;
private: System::Windows::Forms::Button^  button211;
private: System::Windows::Forms::Button^  button212;
private: System::Windows::Forms::Button^  button213;
private: System::Windows::Forms::Button^  button214;
private: System::Windows::Forms::Button^  button215;
private: System::Windows::Forms::Button^  button216;
private: System::Windows::Forms::Button^  button217;
private: System::Windows::Forms::Button^  button218;
private: System::Windows::Forms::PictureBox^  pictureBox33;
private: System::Windows::Forms::TabPage^  tabPage36;
private: System::Windows::Forms::Button^  button219;
private: System::Windows::Forms::Button^  button220;
private: System::Windows::Forms::Button^  button221;
private: System::Windows::Forms::Button^  button222;
private: System::Windows::Forms::Button^  button223;
private: System::Windows::Forms::Button^  button224;
private: System::Windows::Forms::Button^  button225;
private: System::Windows::Forms::Button^  button226;
private: System::Windows::Forms::PictureBox^  pictureBox34;
private: System::Windows::Forms::TabPage^  tabPage37;
private: System::Windows::Forms::Button^  button227;
private: System::Windows::Forms::Button^  button228;
private: System::Windows::Forms::Button^  button229;
private: System::Windows::Forms::Button^  button230;
private: System::Windows::Forms::Button^  button231;
private: System::Windows::Forms::Button^  button232;
private: System::Windows::Forms::Button^  button233;
private: System::Windows::Forms::Button^  button234;
private: System::Windows::Forms::PictureBox^  pictureBox35;
private: System::Windows::Forms::TabPage^  tabPage38;
private: System::Windows::Forms::Button^  button235;
private: System::Windows::Forms::Button^  button236;
private: System::Windows::Forms::Button^  button237;
private: System::Windows::Forms::Button^  button238;
private: System::Windows::Forms::Button^  button239;
private: System::Windows::Forms::Button^  button240;
private: System::Windows::Forms::Button^  button241;
private: System::Windows::Forms::Button^  button242;
private: System::Windows::Forms::PictureBox^  pictureBox36;
private: System::Windows::Forms::TabPage^  tabPage39;
private: System::Windows::Forms::Button^  button243;
private: System::Windows::Forms::Button^  button244;
private: System::Windows::Forms::Button^  button245;
private: System::Windows::Forms::Button^  button246;
private: System::Windows::Forms::Button^  button247;
private: System::Windows::Forms::Button^  button248;
private: System::Windows::Forms::Button^  button249;
private: System::Windows::Forms::Button^  button250;
private: System::Windows::Forms::PictureBox^  pictureBox37;
private: System::Windows::Forms::TabPage^  tabPage40;
private: System::Windows::Forms::Button^  button251;
private: System::Windows::Forms::Button^  button252;
private: System::Windows::Forms::Button^  button253;
private: System::Windows::Forms::Button^  button254;
private: System::Windows::Forms::Button^  button255;
private: System::Windows::Forms::Button^  button256;
private: System::Windows::Forms::Button^  button257;
private: System::Windows::Forms::Button^  button258;
private: System::Windows::Forms::PictureBox^  pictureBox38;
private: System::Windows::Forms::TabPage^  tabPage41;
private: System::Windows::Forms::Button^  button259;
private: System::Windows::Forms::Button^  button260;
private: System::Windows::Forms::Button^  button261;
private: System::Windows::Forms::Button^  button262;
private: System::Windows::Forms::Button^  button263;
private: System::Windows::Forms::Button^  button264;
private: System::Windows::Forms::Button^  button265;
private: System::Windows::Forms::Button^  button266;
private: System::Windows::Forms::PictureBox^  pictureBox39;
private: System::Windows::Forms::TabPage^  tabPage42;
private: System::Windows::Forms::Button^  button267;
private: System::Windows::Forms::Button^  button268;
private: System::Windows::Forms::Button^  button269;
private: System::Windows::Forms::Button^  button270;
private: System::Windows::Forms::Button^  button271;
private: System::Windows::Forms::Button^  button272;
private: System::Windows::Forms::Button^  button273;
private: System::Windows::Forms::Button^  button274;
private: System::Windows::Forms::PictureBox^  pictureBox40;
private: System::Windows::Forms::TabPage^  tabPage43;
private: System::Windows::Forms::Button^  button275;
private: System::Windows::Forms::Button^  button276;
private: System::Windows::Forms::Button^  button277;
private: System::Windows::Forms::Button^  button278;
private: System::Windows::Forms::Button^  button279;
private: System::Windows::Forms::Button^  button280;
private: System::Windows::Forms::Button^  button281;
private: System::Windows::Forms::Button^  button282;
private: System::Windows::Forms::PictureBox^  pictureBox41;
private: System::Windows::Forms::TabPage^  tabPage44;
private: System::Windows::Forms::Button^  button283;
private: System::Windows::Forms::Button^  button284;
private: System::Windows::Forms::Button^  button285;
private: System::Windows::Forms::Button^  button286;
private: System::Windows::Forms::Button^  button287;
private: System::Windows::Forms::Button^  button288;
private: System::Windows::Forms::Button^  button289;
private: System::Windows::Forms::Button^  button290;
private: System::Windows::Forms::PictureBox^  pictureBox42;
private: System::Windows::Forms::TabPage^  tabPage45;
private: System::Windows::Forms::Button^  button291;
private: System::Windows::Forms::Button^  button292;
private: System::Windows::Forms::Button^  button293;
private: System::Windows::Forms::Button^  button294;
private: System::Windows::Forms::Button^  button295;
private: System::Windows::Forms::Button^  button296;
private: System::Windows::Forms::Button^  button297;
private: System::Windows::Forms::Button^  button298;
private: System::Windows::Forms::PictureBox^  pictureBox43;
private: System::Windows::Forms::TabPage^  tabPage46;
private: System::Windows::Forms::Button^  button299;
private: System::Windows::Forms::Button^  button300;
private: System::Windows::Forms::Button^  button301;
private: System::Windows::Forms::Button^  button302;
private: System::Windows::Forms::Button^  button303;
private: System::Windows::Forms::Button^  button304;
private: System::Windows::Forms::Button^  button305;
private: System::Windows::Forms::Button^  button306;
private: System::Windows::Forms::PictureBox^  pictureBox44;
private: System::Windows::Forms::TabPage^  tabPage47;
private: System::Windows::Forms::Button^  button307;
private: System::Windows::Forms::Button^  button308;
private: System::Windows::Forms::Button^  button309;
private: System::Windows::Forms::Button^  button310;
private: System::Windows::Forms::Button^  button311;
private: System::Windows::Forms::Button^  button312;
private: System::Windows::Forms::Button^  button313;
private: System::Windows::Forms::Button^  button314;
private: System::Windows::Forms::PictureBox^  pictureBox45;
private: System::Windows::Forms::TabPage^  tabPage48;
private: System::Windows::Forms::Button^  button315;
private: System::Windows::Forms::Button^  button316;
private: System::Windows::Forms::Button^  button317;
private: System::Windows::Forms::Button^  button318;
private: System::Windows::Forms::Button^  button319;
private: System::Windows::Forms::Button^  button320;
private: System::Windows::Forms::Button^  button321;
private: System::Windows::Forms::Button^  button322;
private: System::Windows::Forms::PictureBox^  pictureBox46;
private: System::Windows::Forms::TabPage^  tabPage49;
private: System::Windows::Forms::Button^  button323;
private: System::Windows::Forms::Button^  button324;
private: System::Windows::Forms::Button^  button325;
private: System::Windows::Forms::Button^  button326;
private: System::Windows::Forms::Button^  button327;
private: System::Windows::Forms::Button^  button328;
private: System::Windows::Forms::Button^  button329;
private: System::Windows::Forms::Button^  button330;
private: System::Windows::Forms::PictureBox^  pictureBox47;
private: System::Windows::Forms::TabPage^  tabPage50;
private: System::Windows::Forms::Button^  button331;
private: System::Windows::Forms::Button^  button332;
private: System::Windows::Forms::Button^  button333;
private: System::Windows::Forms::Button^  button334;
private: System::Windows::Forms::Button^  button335;
private: System::Windows::Forms::Button^  button336;
private: System::Windows::Forms::Button^  button337;
private: System::Windows::Forms::Button^  button338;
private: System::Windows::Forms::PictureBox^  pictureBox48;
private: System::Windows::Forms::TabPage^  tabPage51;
private: System::Windows::Forms::Button^  button339;
private: System::Windows::Forms::Button^  button340;
private: System::Windows::Forms::Button^  button341;
private: System::Windows::Forms::Button^  button342;
private: System::Windows::Forms::Button^  button343;
private: System::Windows::Forms::Button^  button344;
private: System::Windows::Forms::Button^  button345;
private: System::Windows::Forms::Button^  button346;
private: System::Windows::Forms::PictureBox^  pictureBox49;
private: System::Windows::Forms::TabPage^  tabPage52;
private: System::Windows::Forms::Button^  button347;
private: System::Windows::Forms::Button^  button348;
private: System::Windows::Forms::Button^  button349;
private: System::Windows::Forms::Button^  button350;
private: System::Windows::Forms::Button^  button351;
private: System::Windows::Forms::Button^  button352;
private: System::Windows::Forms::Button^  button353;
private: System::Windows::Forms::Button^  button354;
private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::TabPage^  tabPage53;
private: System::Windows::Forms::Button^  button355;
private: System::Windows::Forms::Button^  button356;
private: System::Windows::Forms::Button^  button357;
private: System::Windows::Forms::Button^  button358;
private: System::Windows::Forms::Button^  button359;
private: System::Windows::Forms::Button^  button360;
private: System::Windows::Forms::Button^  button361;
private: System::Windows::Forms::Button^  button362;
private: System::Windows::Forms::PictureBox^  pictureBox51;
private: System::Windows::Forms::TabPage^  tabPage54;
private: System::Windows::Forms::Button^  button363;
private: System::Windows::Forms::Button^  button364;
private: System::Windows::Forms::Button^  button365;
private: System::Windows::Forms::Button^  button366;
private: System::Windows::Forms::Button^  button367;
private: System::Windows::Forms::Button^  button368;
private: System::Windows::Forms::Button^  button369;
private: System::Windows::Forms::Button^  button370;
private: System::Windows::Forms::PictureBox^  pictureBox52;
private: System::Windows::Forms::TabPage^  tabPage55;
private: System::Windows::Forms::Button^  button371;
private: System::Windows::Forms::Button^  button372;
private: System::Windows::Forms::Button^  button373;
private: System::Windows::Forms::Button^  button374;
private: System::Windows::Forms::Button^  button375;
private: System::Windows::Forms::Button^  button376;
private: System::Windows::Forms::Button^  button377;
private: System::Windows::Forms::Button^  button378;
private: System::Windows::Forms::PictureBox^  pictureBox53;
private: System::Windows::Forms::TabPage^  tabPage56;
private: System::Windows::Forms::Button^  button379;
private: System::Windows::Forms::Button^  button380;
private: System::Windows::Forms::Button^  button381;
private: System::Windows::Forms::Button^  button382;
private: System::Windows::Forms::Button^  button383;
private: System::Windows::Forms::Button^  button384;
private: System::Windows::Forms::Button^  button385;
private: System::Windows::Forms::Button^  button386;
private: System::Windows::Forms::PictureBox^  pictureBox54;
private: System::Windows::Forms::TabPage^  tabPage57;
private: System::Windows::Forms::Button^  button387;
private: System::Windows::Forms::Button^  button388;
private: System::Windows::Forms::Button^  button389;
private: System::Windows::Forms::Button^  button390;
private: System::Windows::Forms::Button^  button391;
private: System::Windows::Forms::Button^  button392;
private: System::Windows::Forms::Button^  button393;
private: System::Windows::Forms::Button^  button394;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::TabPage^  tabPage58;
private: System::Windows::Forms::Button^  button395;
private: System::Windows::Forms::Button^  button396;
private: System::Windows::Forms::Button^  button397;
private: System::Windows::Forms::Button^  button398;
private: System::Windows::Forms::Button^  button399;
private: System::Windows::Forms::Button^  button400;
private: System::Windows::Forms::Button^  button401;
private: System::Windows::Forms::Button^  button402;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::TabPage^  tabPage59;
private: System::Windows::Forms::Button^  button403;
private: System::Windows::Forms::Button^  button404;
private: System::Windows::Forms::Button^  button405;
private: System::Windows::Forms::Button^  button406;
private: System::Windows::Forms::Button^  button407;
private: System::Windows::Forms::Button^  button408;
private: System::Windows::Forms::Button^  button409;
private: System::Windows::Forms::Button^  button410;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::TabPage^  tabPage60;
private: System::Windows::Forms::Button^  button411;
private: System::Windows::Forms::Button^  button412;
private: System::Windows::Forms::Button^  button413;
private: System::Windows::Forms::Button^  button414;
private: System::Windows::Forms::Button^  button415;
private: System::Windows::Forms::Button^  button416;
private: System::Windows::Forms::Button^  button417;
private: System::Windows::Forms::Button^  button418;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::TabPage^  tabPage61;
private: System::Windows::Forms::Button^  button419;
private: System::Windows::Forms::Button^  button420;
private: System::Windows::Forms::Button^  button421;
private: System::Windows::Forms::Button^  button422;
private: System::Windows::Forms::Button^  button423;
private: System::Windows::Forms::Button^  button424;
private: System::Windows::Forms::Button^  button425;
private: System::Windows::Forms::Button^  button426;
private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::TabPage^  tabPage62;
private: System::Windows::Forms::Button^  button427;
private: System::Windows::Forms::Button^  button428;
private: System::Windows::Forms::Button^  button429;
private: System::Windows::Forms::Button^  button430;
private: System::Windows::Forms::Button^  button431;
private: System::Windows::Forms::Button^  button432;
private: System::Windows::Forms::Button^  button433;
private: System::Windows::Forms::Button^  button434;
private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::TabPage^  tabPage63;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TabPage^  tabPage64;
private: System::Windows::Forms::Label^  label6;



























































































































































































































































































































































































































































































































































































































































































		 String^ Minute1;

	public:
		MyForm(void)
		{
			//array_1 = gcnew array<int^>(60);//Инициализация поля
			//for (int i = 0; i<60; i++)
			//{
			//	array_1[i] = gcnew int;
			//}

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
























































	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Timer^  timer1;
private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button137 = (gcnew System::Windows::Forms::Button());
			this->button138 = (gcnew System::Windows::Forms::Button());
			this->button139 = (gcnew System::Windows::Forms::Button());
			this->button140 = (gcnew System::Windows::Forms::Button());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
			this->button141 = (gcnew System::Windows::Forms::Button());
			this->button142 = (gcnew System::Windows::Forms::Button());
			this->button143 = (gcnew System::Windows::Forms::Button());
			this->button144 = (gcnew System::Windows::Forms::Button());
			this->button145 = (gcnew System::Windows::Forms::Button());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
			this->button153 = (gcnew System::Windows::Forms::Button());
			this->button154 = (gcnew System::Windows::Forms::Button());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->button151 = (gcnew System::Windows::Forms::Button());
			this->button152 = (gcnew System::Windows::Forms::Button());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
			this->button155 = (gcnew System::Windows::Forms::Button());
			this->button156 = (gcnew System::Windows::Forms::Button());
			this->button157 = (gcnew System::Windows::Forms::Button());
			this->button158 = (gcnew System::Windows::Forms::Button());
			this->button159 = (gcnew System::Windows::Forms::Button());
			this->button160 = (gcnew System::Windows::Forms::Button());
			this->button161 = (gcnew System::Windows::Forms::Button());
			this->button162 = (gcnew System::Windows::Forms::Button());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
			this->button163 = (gcnew System::Windows::Forms::Button());
			this->button164 = (gcnew System::Windows::Forms::Button());
			this->button165 = (gcnew System::Windows::Forms::Button());
			this->button166 = (gcnew System::Windows::Forms::Button());
			this->button167 = (gcnew System::Windows::Forms::Button());
			this->button168 = (gcnew System::Windows::Forms::Button());
			this->button169 = (gcnew System::Windows::Forms::Button());
			this->button170 = (gcnew System::Windows::Forms::Button());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage30 = (gcnew System::Windows::Forms::TabPage());
			this->button171 = (gcnew System::Windows::Forms::Button());
			this->button172 = (gcnew System::Windows::Forms::Button());
			this->button173 = (gcnew System::Windows::Forms::Button());
			this->button174 = (gcnew System::Windows::Forms::Button());
			this->button175 = (gcnew System::Windows::Forms::Button());
			this->button176 = (gcnew System::Windows::Forms::Button());
			this->button177 = (gcnew System::Windows::Forms::Button());
			this->button178 = (gcnew System::Windows::Forms::Button());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage31 = (gcnew System::Windows::Forms::TabPage());
			this->button179 = (gcnew System::Windows::Forms::Button());
			this->button180 = (gcnew System::Windows::Forms::Button());
			this->button181 = (gcnew System::Windows::Forms::Button());
			this->button182 = (gcnew System::Windows::Forms::Button());
			this->button183 = (gcnew System::Windows::Forms::Button());
			this->button184 = (gcnew System::Windows::Forms::Button());
			this->button185 = (gcnew System::Windows::Forms::Button());
			this->button186 = (gcnew System::Windows::Forms::Button());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage32 = (gcnew System::Windows::Forms::TabPage());
			this->button187 = (gcnew System::Windows::Forms::Button());
			this->button188 = (gcnew System::Windows::Forms::Button());
			this->button189 = (gcnew System::Windows::Forms::Button());
			this->button190 = (gcnew System::Windows::Forms::Button());
			this->button191 = (gcnew System::Windows::Forms::Button());
			this->button192 = (gcnew System::Windows::Forms::Button());
			this->button193 = (gcnew System::Windows::Forms::Button());
			this->button194 = (gcnew System::Windows::Forms::Button());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage33 = (gcnew System::Windows::Forms::TabPage());
			this->button195 = (gcnew System::Windows::Forms::Button());
			this->button196 = (gcnew System::Windows::Forms::Button());
			this->button197 = (gcnew System::Windows::Forms::Button());
			this->button198 = (gcnew System::Windows::Forms::Button());
			this->button199 = (gcnew System::Windows::Forms::Button());
			this->button200 = (gcnew System::Windows::Forms::Button());
			this->button201 = (gcnew System::Windows::Forms::Button());
			this->button202 = (gcnew System::Windows::Forms::Button());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage34 = (gcnew System::Windows::Forms::TabPage());
			this->button203 = (gcnew System::Windows::Forms::Button());
			this->button204 = (gcnew System::Windows::Forms::Button());
			this->button205 = (gcnew System::Windows::Forms::Button());
			this->button206 = (gcnew System::Windows::Forms::Button());
			this->button207 = (gcnew System::Windows::Forms::Button());
			this->button208 = (gcnew System::Windows::Forms::Button());
			this->button209 = (gcnew System::Windows::Forms::Button());
			this->button210 = (gcnew System::Windows::Forms::Button());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage35 = (gcnew System::Windows::Forms::TabPage());
			this->button211 = (gcnew System::Windows::Forms::Button());
			this->button212 = (gcnew System::Windows::Forms::Button());
			this->button213 = (gcnew System::Windows::Forms::Button());
			this->button214 = (gcnew System::Windows::Forms::Button());
			this->button215 = (gcnew System::Windows::Forms::Button());
			this->button216 = (gcnew System::Windows::Forms::Button());
			this->button217 = (gcnew System::Windows::Forms::Button());
			this->button218 = (gcnew System::Windows::Forms::Button());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage36 = (gcnew System::Windows::Forms::TabPage());
			this->button219 = (gcnew System::Windows::Forms::Button());
			this->button220 = (gcnew System::Windows::Forms::Button());
			this->button221 = (gcnew System::Windows::Forms::Button());
			this->button222 = (gcnew System::Windows::Forms::Button());
			this->button223 = (gcnew System::Windows::Forms::Button());
			this->button224 = (gcnew System::Windows::Forms::Button());
			this->button225 = (gcnew System::Windows::Forms::Button());
			this->button226 = (gcnew System::Windows::Forms::Button());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage37 = (gcnew System::Windows::Forms::TabPage());
			this->button227 = (gcnew System::Windows::Forms::Button());
			this->button228 = (gcnew System::Windows::Forms::Button());
			this->button229 = (gcnew System::Windows::Forms::Button());
			this->button230 = (gcnew System::Windows::Forms::Button());
			this->button231 = (gcnew System::Windows::Forms::Button());
			this->button232 = (gcnew System::Windows::Forms::Button());
			this->button233 = (gcnew System::Windows::Forms::Button());
			this->button234 = (gcnew System::Windows::Forms::Button());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage38 = (gcnew System::Windows::Forms::TabPage());
			this->button235 = (gcnew System::Windows::Forms::Button());
			this->button236 = (gcnew System::Windows::Forms::Button());
			this->button237 = (gcnew System::Windows::Forms::Button());
			this->button238 = (gcnew System::Windows::Forms::Button());
			this->button239 = (gcnew System::Windows::Forms::Button());
			this->button240 = (gcnew System::Windows::Forms::Button());
			this->button241 = (gcnew System::Windows::Forms::Button());
			this->button242 = (gcnew System::Windows::Forms::Button());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage39 = (gcnew System::Windows::Forms::TabPage());
			this->button243 = (gcnew System::Windows::Forms::Button());
			this->button244 = (gcnew System::Windows::Forms::Button());
			this->button245 = (gcnew System::Windows::Forms::Button());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->button247 = (gcnew System::Windows::Forms::Button());
			this->button248 = (gcnew System::Windows::Forms::Button());
			this->button249 = (gcnew System::Windows::Forms::Button());
			this->button250 = (gcnew System::Windows::Forms::Button());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage40 = (gcnew System::Windows::Forms::TabPage());
			this->button251 = (gcnew System::Windows::Forms::Button());
			this->button252 = (gcnew System::Windows::Forms::Button());
			this->button253 = (gcnew System::Windows::Forms::Button());
			this->button254 = (gcnew System::Windows::Forms::Button());
			this->button255 = (gcnew System::Windows::Forms::Button());
			this->button256 = (gcnew System::Windows::Forms::Button());
			this->button257 = (gcnew System::Windows::Forms::Button());
			this->button258 = (gcnew System::Windows::Forms::Button());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage41 = (gcnew System::Windows::Forms::TabPage());
			this->button259 = (gcnew System::Windows::Forms::Button());
			this->button260 = (gcnew System::Windows::Forms::Button());
			this->button261 = (gcnew System::Windows::Forms::Button());
			this->button262 = (gcnew System::Windows::Forms::Button());
			this->button263 = (gcnew System::Windows::Forms::Button());
			this->button264 = (gcnew System::Windows::Forms::Button());
			this->button265 = (gcnew System::Windows::Forms::Button());
			this->button266 = (gcnew System::Windows::Forms::Button());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage42 = (gcnew System::Windows::Forms::TabPage());
			this->button267 = (gcnew System::Windows::Forms::Button());
			this->button268 = (gcnew System::Windows::Forms::Button());
			this->button269 = (gcnew System::Windows::Forms::Button());
			this->button270 = (gcnew System::Windows::Forms::Button());
			this->button271 = (gcnew System::Windows::Forms::Button());
			this->button272 = (gcnew System::Windows::Forms::Button());
			this->button273 = (gcnew System::Windows::Forms::Button());
			this->button274 = (gcnew System::Windows::Forms::Button());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage43 = (gcnew System::Windows::Forms::TabPage());
			this->button275 = (gcnew System::Windows::Forms::Button());
			this->button276 = (gcnew System::Windows::Forms::Button());
			this->button277 = (gcnew System::Windows::Forms::Button());
			this->button278 = (gcnew System::Windows::Forms::Button());
			this->button279 = (gcnew System::Windows::Forms::Button());
			this->button280 = (gcnew System::Windows::Forms::Button());
			this->button281 = (gcnew System::Windows::Forms::Button());
			this->button282 = (gcnew System::Windows::Forms::Button());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage44 = (gcnew System::Windows::Forms::TabPage());
			this->button283 = (gcnew System::Windows::Forms::Button());
			this->button284 = (gcnew System::Windows::Forms::Button());
			this->button285 = (gcnew System::Windows::Forms::Button());
			this->button286 = (gcnew System::Windows::Forms::Button());
			this->button287 = (gcnew System::Windows::Forms::Button());
			this->button288 = (gcnew System::Windows::Forms::Button());
			this->button289 = (gcnew System::Windows::Forms::Button());
			this->button290 = (gcnew System::Windows::Forms::Button());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage45 = (gcnew System::Windows::Forms::TabPage());
			this->button291 = (gcnew System::Windows::Forms::Button());
			this->button292 = (gcnew System::Windows::Forms::Button());
			this->button293 = (gcnew System::Windows::Forms::Button());
			this->button294 = (gcnew System::Windows::Forms::Button());
			this->button295 = (gcnew System::Windows::Forms::Button());
			this->button296 = (gcnew System::Windows::Forms::Button());
			this->button297 = (gcnew System::Windows::Forms::Button());
			this->button298 = (gcnew System::Windows::Forms::Button());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage46 = (gcnew System::Windows::Forms::TabPage());
			this->button299 = (gcnew System::Windows::Forms::Button());
			this->button300 = (gcnew System::Windows::Forms::Button());
			this->button301 = (gcnew System::Windows::Forms::Button());
			this->button302 = (gcnew System::Windows::Forms::Button());
			this->button303 = (gcnew System::Windows::Forms::Button());
			this->button304 = (gcnew System::Windows::Forms::Button());
			this->button305 = (gcnew System::Windows::Forms::Button());
			this->button306 = (gcnew System::Windows::Forms::Button());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage47 = (gcnew System::Windows::Forms::TabPage());
			this->button307 = (gcnew System::Windows::Forms::Button());
			this->button308 = (gcnew System::Windows::Forms::Button());
			this->button309 = (gcnew System::Windows::Forms::Button());
			this->button310 = (gcnew System::Windows::Forms::Button());
			this->button311 = (gcnew System::Windows::Forms::Button());
			this->button312 = (gcnew System::Windows::Forms::Button());
			this->button313 = (gcnew System::Windows::Forms::Button());
			this->button314 = (gcnew System::Windows::Forms::Button());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage48 = (gcnew System::Windows::Forms::TabPage());
			this->button315 = (gcnew System::Windows::Forms::Button());
			this->button316 = (gcnew System::Windows::Forms::Button());
			this->button317 = (gcnew System::Windows::Forms::Button());
			this->button318 = (gcnew System::Windows::Forms::Button());
			this->button319 = (gcnew System::Windows::Forms::Button());
			this->button320 = (gcnew System::Windows::Forms::Button());
			this->button321 = (gcnew System::Windows::Forms::Button());
			this->button322 = (gcnew System::Windows::Forms::Button());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage49 = (gcnew System::Windows::Forms::TabPage());
			this->button323 = (gcnew System::Windows::Forms::Button());
			this->button324 = (gcnew System::Windows::Forms::Button());
			this->button325 = (gcnew System::Windows::Forms::Button());
			this->button326 = (gcnew System::Windows::Forms::Button());
			this->button327 = (gcnew System::Windows::Forms::Button());
			this->button328 = (gcnew System::Windows::Forms::Button());
			this->button329 = (gcnew System::Windows::Forms::Button());
			this->button330 = (gcnew System::Windows::Forms::Button());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage50 = (gcnew System::Windows::Forms::TabPage());
			this->button331 = (gcnew System::Windows::Forms::Button());
			this->button332 = (gcnew System::Windows::Forms::Button());
			this->button333 = (gcnew System::Windows::Forms::Button());
			this->button334 = (gcnew System::Windows::Forms::Button());
			this->button335 = (gcnew System::Windows::Forms::Button());
			this->button336 = (gcnew System::Windows::Forms::Button());
			this->button337 = (gcnew System::Windows::Forms::Button());
			this->button338 = (gcnew System::Windows::Forms::Button());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage51 = (gcnew System::Windows::Forms::TabPage());
			this->button339 = (gcnew System::Windows::Forms::Button());
			this->button340 = (gcnew System::Windows::Forms::Button());
			this->button341 = (gcnew System::Windows::Forms::Button());
			this->button342 = (gcnew System::Windows::Forms::Button());
			this->button343 = (gcnew System::Windows::Forms::Button());
			this->button344 = (gcnew System::Windows::Forms::Button());
			this->button345 = (gcnew System::Windows::Forms::Button());
			this->button346 = (gcnew System::Windows::Forms::Button());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage52 = (gcnew System::Windows::Forms::TabPage());
			this->button347 = (gcnew System::Windows::Forms::Button());
			this->button348 = (gcnew System::Windows::Forms::Button());
			this->button349 = (gcnew System::Windows::Forms::Button());
			this->button350 = (gcnew System::Windows::Forms::Button());
			this->button351 = (gcnew System::Windows::Forms::Button());
			this->button352 = (gcnew System::Windows::Forms::Button());
			this->button353 = (gcnew System::Windows::Forms::Button());
			this->button354 = (gcnew System::Windows::Forms::Button());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage53 = (gcnew System::Windows::Forms::TabPage());
			this->button355 = (gcnew System::Windows::Forms::Button());
			this->button356 = (gcnew System::Windows::Forms::Button());
			this->button357 = (gcnew System::Windows::Forms::Button());
			this->button358 = (gcnew System::Windows::Forms::Button());
			this->button359 = (gcnew System::Windows::Forms::Button());
			this->button360 = (gcnew System::Windows::Forms::Button());
			this->button361 = (gcnew System::Windows::Forms::Button());
			this->button362 = (gcnew System::Windows::Forms::Button());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage54 = (gcnew System::Windows::Forms::TabPage());
			this->button363 = (gcnew System::Windows::Forms::Button());
			this->button364 = (gcnew System::Windows::Forms::Button());
			this->button365 = (gcnew System::Windows::Forms::Button());
			this->button366 = (gcnew System::Windows::Forms::Button());
			this->button367 = (gcnew System::Windows::Forms::Button());
			this->button368 = (gcnew System::Windows::Forms::Button());
			this->button369 = (gcnew System::Windows::Forms::Button());
			this->button370 = (gcnew System::Windows::Forms::Button());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage55 = (gcnew System::Windows::Forms::TabPage());
			this->button371 = (gcnew System::Windows::Forms::Button());
			this->button372 = (gcnew System::Windows::Forms::Button());
			this->button373 = (gcnew System::Windows::Forms::Button());
			this->button374 = (gcnew System::Windows::Forms::Button());
			this->button375 = (gcnew System::Windows::Forms::Button());
			this->button376 = (gcnew System::Windows::Forms::Button());
			this->button377 = (gcnew System::Windows::Forms::Button());
			this->button378 = (gcnew System::Windows::Forms::Button());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage56 = (gcnew System::Windows::Forms::TabPage());
			this->button379 = (gcnew System::Windows::Forms::Button());
			this->button380 = (gcnew System::Windows::Forms::Button());
			this->button381 = (gcnew System::Windows::Forms::Button());
			this->button382 = (gcnew System::Windows::Forms::Button());
			this->button383 = (gcnew System::Windows::Forms::Button());
			this->button384 = (gcnew System::Windows::Forms::Button());
			this->button385 = (gcnew System::Windows::Forms::Button());
			this->button386 = (gcnew System::Windows::Forms::Button());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage57 = (gcnew System::Windows::Forms::TabPage());
			this->button387 = (gcnew System::Windows::Forms::Button());
			this->button388 = (gcnew System::Windows::Forms::Button());
			this->button389 = (gcnew System::Windows::Forms::Button());
			this->button390 = (gcnew System::Windows::Forms::Button());
			this->button391 = (gcnew System::Windows::Forms::Button());
			this->button392 = (gcnew System::Windows::Forms::Button());
			this->button393 = (gcnew System::Windows::Forms::Button());
			this->button394 = (gcnew System::Windows::Forms::Button());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage58 = (gcnew System::Windows::Forms::TabPage());
			this->button395 = (gcnew System::Windows::Forms::Button());
			this->button396 = (gcnew System::Windows::Forms::Button());
			this->button397 = (gcnew System::Windows::Forms::Button());
			this->button398 = (gcnew System::Windows::Forms::Button());
			this->button399 = (gcnew System::Windows::Forms::Button());
			this->button400 = (gcnew System::Windows::Forms::Button());
			this->button401 = (gcnew System::Windows::Forms::Button());
			this->button402 = (gcnew System::Windows::Forms::Button());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage59 = (gcnew System::Windows::Forms::TabPage());
			this->button403 = (gcnew System::Windows::Forms::Button());
			this->button404 = (gcnew System::Windows::Forms::Button());
			this->button405 = (gcnew System::Windows::Forms::Button());
			this->button406 = (gcnew System::Windows::Forms::Button());
			this->button407 = (gcnew System::Windows::Forms::Button());
			this->button408 = (gcnew System::Windows::Forms::Button());
			this->button409 = (gcnew System::Windows::Forms::Button());
			this->button410 = (gcnew System::Windows::Forms::Button());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage60 = (gcnew System::Windows::Forms::TabPage());
			this->button411 = (gcnew System::Windows::Forms::Button());
			this->button412 = (gcnew System::Windows::Forms::Button());
			this->button413 = (gcnew System::Windows::Forms::Button());
			this->button414 = (gcnew System::Windows::Forms::Button());
			this->button415 = (gcnew System::Windows::Forms::Button());
			this->button416 = (gcnew System::Windows::Forms::Button());
			this->button417 = (gcnew System::Windows::Forms::Button());
			this->button418 = (gcnew System::Windows::Forms::Button());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage61 = (gcnew System::Windows::Forms::TabPage());
			this->button419 = (gcnew System::Windows::Forms::Button());
			this->button420 = (gcnew System::Windows::Forms::Button());
			this->button421 = (gcnew System::Windows::Forms::Button());
			this->button422 = (gcnew System::Windows::Forms::Button());
			this->button423 = (gcnew System::Windows::Forms::Button());
			this->button424 = (gcnew System::Windows::Forms::Button());
			this->button425 = (gcnew System::Windows::Forms::Button());
			this->button426 = (gcnew System::Windows::Forms::Button());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage62 = (gcnew System::Windows::Forms::TabPage());
			this->button427 = (gcnew System::Windows::Forms::Button());
			this->button428 = (gcnew System::Windows::Forms::Button());
			this->button429 = (gcnew System::Windows::Forms::Button());
			this->button430 = (gcnew System::Windows::Forms::Button());
			this->button431 = (gcnew System::Windows::Forms::Button());
			this->button432 = (gcnew System::Windows::Forms::Button());
			this->button433 = (gcnew System::Windows::Forms::Button());
			this->button434 = (gcnew System::Windows::Forms::Button());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage63 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage64 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->tabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->tabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->tabPage19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->tabPage20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->tabPage21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->tabPage22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->tabPage23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->tabPage24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->tabPage25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			this->tabPage26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->tabPage27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->tabPage28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			this->tabPage29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->tabPage30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->tabPage31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			this->tabPage32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->tabPage33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->tabPage34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->tabPage35->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->tabPage36->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->tabPage37->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			this->tabPage38->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			this->tabPage39->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->tabPage40->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			this->tabPage41->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->tabPage42->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			this->tabPage43->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			this->tabPage44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			this->tabPage45->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			this->tabPage46->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			this->tabPage47->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->tabPage48->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			this->tabPage49->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			this->tabPage50->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			this->tabPage51->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			this->tabPage52->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			this->tabPage53->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			this->tabPage54->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			this->tabPage55->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			this->tabPage56->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			this->tabPage57->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			this->tabPage58->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			this->tabPage59->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			this->tabPage60->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			this->tabPage61->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			this->tabPage62->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			this->tabPage63->SuspendLayout();
			this->tabPage64->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage13);
			this->tabControl1->Controls->Add(this->tabPage14);
			this->tabControl1->Controls->Add(this->tabPage15);
			this->tabControl1->Controls->Add(this->tabPage16);
			this->tabControl1->Controls->Add(this->tabPage17);
			this->tabControl1->Controls->Add(this->tabPage18);
			this->tabControl1->Controls->Add(this->tabPage19);
			this->tabControl1->Controls->Add(this->tabPage20);
			this->tabControl1->Controls->Add(this->tabPage21);
			this->tabControl1->Controls->Add(this->tabPage22);
			this->tabControl1->Controls->Add(this->tabPage23);
			this->tabControl1->Controls->Add(this->tabPage24);
			this->tabControl1->Controls->Add(this->tabPage25);
			this->tabControl1->Controls->Add(this->tabPage26);
			this->tabControl1->Controls->Add(this->tabPage27);
			this->tabControl1->Controls->Add(this->tabPage28);
			this->tabControl1->Controls->Add(this->tabPage29);
			this->tabControl1->Controls->Add(this->tabPage30);
			this->tabControl1->Controls->Add(this->tabPage31);
			this->tabControl1->Controls->Add(this->tabPage32);
			this->tabControl1->Controls->Add(this->tabPage33);
			this->tabControl1->Controls->Add(this->tabPage34);
			this->tabControl1->Controls->Add(this->tabPage35);
			this->tabControl1->Controls->Add(this->tabPage36);
			this->tabControl1->Controls->Add(this->tabPage37);
			this->tabControl1->Controls->Add(this->tabPage38);
			this->tabControl1->Controls->Add(this->tabPage39);
			this->tabControl1->Controls->Add(this->tabPage40);
			this->tabControl1->Controls->Add(this->tabPage41);
			this->tabControl1->Controls->Add(this->tabPage42);
			this->tabControl1->Controls->Add(this->tabPage43);
			this->tabControl1->Controls->Add(this->tabPage44);
			this->tabControl1->Controls->Add(this->tabPage45);
			this->tabControl1->Controls->Add(this->tabPage46);
			this->tabControl1->Controls->Add(this->tabPage47);
			this->tabControl1->Controls->Add(this->tabPage48);
			this->tabControl1->Controls->Add(this->tabPage49);
			this->tabControl1->Controls->Add(this->tabPage50);
			this->tabControl1->Controls->Add(this->tabPage51);
			this->tabControl1->Controls->Add(this->tabPage52);
			this->tabControl1->Controls->Add(this->tabPage53);
			this->tabControl1->Controls->Add(this->tabPage54);
			this->tabControl1->Controls->Add(this->tabPage55);
			this->tabControl1->Controls->Add(this->tabPage56);
			this->tabControl1->Controls->Add(this->tabPage57);
			this->tabControl1->Controls->Add(this->tabPage58);
			this->tabControl1->Controls->Add(this->tabPage59);
			this->tabControl1->Controls->Add(this->tabPage60);
			this->tabControl1->Controls->Add(this->tabPage61);
			this->tabControl1->Controls->Add(this->tabPage62);
			this->tabControl1->Controls->Add(this->tabPage63);
			this->tabControl1->Controls->Add(this->tabPage64);
			this->tabControl1->Location = System::Drawing::Point(0, -20);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(940, 650);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button31);
			this->tabPage6->Controls->Add(this->label1);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(932, 624);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(672, 351);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(123, 50);
			this->button31->TabIndex = 1;
			this->button31->Text = L"Далее";
			this->button31->UseMnemonic = false;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(115, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(680, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Все наши исследования проводятся исключительно в научных целях,\r\nпоэтому от вас т"
				L"ребуются добросовестность, глубокая обдуманность,\r\nискренность и точность в отве"
				L"тах.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button32);
			this->tabPage7->Controls->Add(this->label2);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(932, 624);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"tabPage7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(403, 354);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(123, 50);
			this->button32->TabIndex = 3;
			this->button32->Text = L"СТАРТ";
			this->button32->UseMnemonic = false;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(52, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(832, 125);
			this->label2->TabIndex = 2;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(932, 624);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(633, 446);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 82);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(408, 446);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 82);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(192, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 82);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(633, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 82);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(408, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 82);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(192, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 82);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(284, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 218);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(932, 624);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(611, 458);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(132, 82);
			this->button7->TabIndex = 13;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(386, 458);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(132, 82);
			this->button8->TabIndex = 12;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Location = System::Drawing::Point(170, 458);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 82);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Location = System::Drawing::Point(611, 325);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(132, 82);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Location = System::Drawing::Point(386, 325);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(132, 82);
			this->button11->TabIndex = 9;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Location = System::Drawing::Point(170, 325);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(132, 82);
			this->button12->TabIndex = 8;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(262, 55);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(342, 220);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->button16);
			this->tabPage3->Controls->Add(this->button17);
			this->tabPage3->Controls->Add(this->button18);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(932, 624);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Location = System::Drawing::Point(611, 458);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(132, 82);
			this->button13->TabIndex = 13;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Location = System::Drawing::Point(386, 458);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(132, 82);
			this->button14->TabIndex = 12;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Location = System::Drawing::Point(170, 458);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(132, 82);
			this->button15->TabIndex = 11;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Location = System::Drawing::Point(611, 325);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(132, 82);
			this->button16->TabIndex = 10;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Location = System::Drawing::Point(386, 325);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(132, 82);
			this->button17->TabIndex = 9;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Location = System::Drawing::Point(170, 325);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(132, 82);
			this->button18->TabIndex = 8;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(262, 55);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(343, 218);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button19);
			this->tabPage4->Controls->Add(this->button20);
			this->tabPage4->Controls->Add(this->button21);
			this->tabPage4->Controls->Add(this->button22);
			this->tabPage4->Controls->Add(this->button23);
			this->tabPage4->Controls->Add(this->button24);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(932, 624);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Location = System::Drawing::Point(611, 458);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(132, 82);
			this->button19->TabIndex = 13;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Location = System::Drawing::Point(386, 458);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(132, 82);
			this->button20->TabIndex = 12;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Location = System::Drawing::Point(170, 458);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(132, 82);
			this->button21->TabIndex = 11;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Location = System::Drawing::Point(611, 325);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(132, 82);
			this->button22->TabIndex = 10;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Location = System::Drawing::Point(386, 325);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(132, 82);
			this->button23->TabIndex = 9;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Location = System::Drawing::Point(170, 325);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(132, 82);
			this->button24->TabIndex = 8;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(262, 55);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(342, 219);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button25);
			this->tabPage5->Controls->Add(this->button26);
			this->tabPage5->Controls->Add(this->button27);
			this->tabPage5->Controls->Add(this->button28);
			this->tabPage5->Controls->Add(this->button29);
			this->tabPage5->Controls->Add(this->button30);
			this->tabPage5->Controls->Add(this->pictureBox5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(932, 624);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Location = System::Drawing::Point(611, 458);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(132, 82);
			this->button25->TabIndex = 13;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Location = System::Drawing::Point(386, 458);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(132, 82);
			this->button26->TabIndex = 12;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Location = System::Drawing::Point(170, 458);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(132, 82);
			this->button27->TabIndex = 11;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Location = System::Drawing::Point(611, 325);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(132, 82);
			this->button28->TabIndex = 10;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Location = System::Drawing::Point(386, 325);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(132, 82);
			this->button29->TabIndex = 9;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Location = System::Drawing::Point(170, 325);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(132, 82);
			this->button30->TabIndex = 8;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(262, 55);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(342, 219);
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->button33);
			this->tabPage8->Controls->Add(this->button34);
			this->tabPage8->Controls->Add(this->button35);
			this->tabPage8->Controls->Add(this->button36);
			this->tabPage8->Controls->Add(this->button37);
			this->tabPage8->Controls->Add(this->button38);
			this->tabPage8->Controls->Add(this->pictureBox6);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(932, 624);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"tabPage8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Location = System::Drawing::Point(620, 471);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(132, 82);
			this->button33->TabIndex = 20;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->Location = System::Drawing::Point(395, 471);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(132, 82);
			this->button34->TabIndex = 19;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->Location = System::Drawing::Point(179, 471);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(132, 82);
			this->button35->TabIndex = 18;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->Location = System::Drawing::Point(620, 338);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(132, 82);
			this->button36->TabIndex = 17;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button37->Location = System::Drawing::Point(395, 338);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(132, 82);
			this->button37->TabIndex = 16;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button38->Location = System::Drawing::Point(179, 338);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(132, 82);
			this->button38->TabIndex = 15;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(271, 68);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(342, 219);
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button39);
			this->tabPage9->Controls->Add(this->button40);
			this->tabPage9->Controls->Add(this->button41);
			this->tabPage9->Controls->Add(this->button42);
			this->tabPage9->Controls->Add(this->button43);
			this->tabPage9->Controls->Add(this->button44);
			this->tabPage9->Controls->Add(this->pictureBox7);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(932, 624);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"tabPage9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button39->Location = System::Drawing::Point(620, 471);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(132, 82);
			this->button39->TabIndex = 20;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.BackgroundImage")));
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button40->Location = System::Drawing::Point(395, 471);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(132, 82);
			this->button40->TabIndex = 19;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button41->Location = System::Drawing::Point(179, 471);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(132, 82);
			this->button41->TabIndex = 18;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.BackgroundImage")));
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button42->Location = System::Drawing::Point(620, 338);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(132, 82);
			this->button42->TabIndex = 17;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button43->Location = System::Drawing::Point(395, 338);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(132, 82);
			this->button43->TabIndex = 16;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button44->Location = System::Drawing::Point(179, 338);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(132, 82);
			this->button44->TabIndex = 15;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(271, 68);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(342, 219);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button45);
			this->tabPage10->Controls->Add(this->button46);
			this->tabPage10->Controls->Add(this->button47);
			this->tabPage10->Controls->Add(this->button48);
			this->tabPage10->Controls->Add(this->button49);
			this->tabPage10->Controls->Add(this->button50);
			this->tabPage10->Controls->Add(this->pictureBox8);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(932, 624);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"tabPage10";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button45.BackgroundImage")));
			this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button45->Location = System::Drawing::Point(620, 471);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(132, 82);
			this->button45->TabIndex = 20;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.BackgroundImage")));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button46->Location = System::Drawing::Point(395, 471);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(132, 82);
			this->button46->TabIndex = 19;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.BackgroundImage")));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button47->Location = System::Drawing::Point(179, 471);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(132, 82);
			this->button47->TabIndex = 18;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button48.BackgroundImage")));
			this->button48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button48->Location = System::Drawing::Point(620, 338);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(132, 82);
			this->button48->TabIndex = 17;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button49
			// 
			this->button49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button49.BackgroundImage")));
			this->button49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button49->Location = System::Drawing::Point(395, 338);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(132, 82);
			this->button49->TabIndex = 16;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button50
			// 
			this->button50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button50.BackgroundImage")));
			this->button50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button50->Location = System::Drawing::Point(179, 338);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(132, 82);
			this->button50->TabIndex = 15;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(271, 68);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(342, 219);
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->button51);
			this->tabPage11->Controls->Add(this->button52);
			this->tabPage11->Controls->Add(this->button53);
			this->tabPage11->Controls->Add(this->button54);
			this->tabPage11->Controls->Add(this->button55);
			this->tabPage11->Controls->Add(this->button56);
			this->tabPage11->Controls->Add(this->pictureBox9);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(932, 624);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"tabPage11";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button51.BackgroundImage")));
			this->button51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button51->Location = System::Drawing::Point(620, 471);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(132, 82);
			this->button51->TabIndex = 20;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// button52
			// 
			this->button52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button52.BackgroundImage")));
			this->button52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button52->Location = System::Drawing::Point(395, 471);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(132, 82);
			this->button52->TabIndex = 19;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button53
			// 
			this->button53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button53.BackgroundImage")));
			this->button53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button53->Location = System::Drawing::Point(179, 471);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(132, 82);
			this->button53->TabIndex = 18;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button54
			// 
			this->button54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button54.BackgroundImage")));
			this->button54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button54->Location = System::Drawing::Point(620, 338);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(132, 82);
			this->button54->TabIndex = 17;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button55
			// 
			this->button55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button55.BackgroundImage")));
			this->button55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button55->Location = System::Drawing::Point(395, 338);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(132, 82);
			this->button55->TabIndex = 16;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button56
			// 
			this->button56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button56.BackgroundImage")));
			this->button56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button56->Location = System::Drawing::Point(179, 338);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(132, 82);
			this->button56->TabIndex = 15;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(271, 68);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(342, 219);
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->button57);
			this->tabPage12->Controls->Add(this->button58);
			this->tabPage12->Controls->Add(this->button59);
			this->tabPage12->Controls->Add(this->button60);
			this->tabPage12->Controls->Add(this->button61);
			this->tabPage12->Controls->Add(this->button62);
			this->tabPage12->Controls->Add(this->pictureBox10);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(932, 624);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"tabPage12";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button57.BackgroundImage")));
			this->button57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button57->Location = System::Drawing::Point(620, 471);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(132, 82);
			this->button57->TabIndex = 20;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button58
			// 
			this->button58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button58.BackgroundImage")));
			this->button58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button58->Location = System::Drawing::Point(395, 471);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(132, 82);
			this->button58->TabIndex = 19;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button59
			// 
			this->button59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button59.BackgroundImage")));
			this->button59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button59->Location = System::Drawing::Point(179, 471);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(132, 82);
			this->button59->TabIndex = 18;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button60
			// 
			this->button60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button60.BackgroundImage")));
			this->button60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button60->Location = System::Drawing::Point(620, 338);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(132, 82);
			this->button60->TabIndex = 17;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button60_Click);
			// 
			// button61
			// 
			this->button61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button61.BackgroundImage")));
			this->button61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button61->Location = System::Drawing::Point(395, 338);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(132, 82);
			this->button61->TabIndex = 16;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
			// 
			// button62
			// 
			this->button62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button62.BackgroundImage")));
			this->button62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button62->Location = System::Drawing::Point(179, 338);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(132, 82);
			this->button62->TabIndex = 15;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(271, 68);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(342, 219);
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->button63);
			this->tabPage13->Controls->Add(this->button64);
			this->tabPage13->Controls->Add(this->button65);
			this->tabPage13->Controls->Add(this->button66);
			this->tabPage13->Controls->Add(this->button67);
			this->tabPage13->Controls->Add(this->button68);
			this->tabPage13->Controls->Add(this->pictureBox11);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Size = System::Drawing::Size(932, 624);
			this->tabPage13->TabIndex = 12;
			this->tabPage13->Text = L"tabPage13";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button63.BackgroundImage")));
			this->button63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button63->Location = System::Drawing::Point(620, 471);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(132, 82);
			this->button63->TabIndex = 20;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// button64
			// 
			this->button64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button64.BackgroundImage")));
			this->button64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button64->Location = System::Drawing::Point(395, 471);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(132, 82);
			this->button64->TabIndex = 19;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button64_Click);
			// 
			// button65
			// 
			this->button65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button65.BackgroundImage")));
			this->button65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button65->Location = System::Drawing::Point(179, 471);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(132, 82);
			this->button65->TabIndex = 18;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button66
			// 
			this->button66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button66.BackgroundImage")));
			this->button66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button66->Location = System::Drawing::Point(620, 338);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(132, 82);
			this->button66->TabIndex = 17;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// button67
			// 
			this->button67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button67.BackgroundImage")));
			this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button67->Location = System::Drawing::Point(395, 338);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(132, 82);
			this->button67->TabIndex = 16;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// button68
			// 
			this->button68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button68.BackgroundImage")));
			this->button68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button68->Location = System::Drawing::Point(179, 338);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(132, 82);
			this->button68->TabIndex = 15;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(271, 68);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(342, 219);
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->button69);
			this->tabPage14->Controls->Add(this->button70);
			this->tabPage14->Controls->Add(this->button71);
			this->tabPage14->Controls->Add(this->button72);
			this->tabPage14->Controls->Add(this->button73);
			this->tabPage14->Controls->Add(this->button74);
			this->tabPage14->Controls->Add(this->pictureBox12);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(932, 624);
			this->tabPage14->TabIndex = 13;
			this->tabPage14->Text = L"tabPage14";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button69.BackgroundImage")));
			this->button69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button69->Location = System::Drawing::Point(620, 471);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(132, 82);
			this->button69->TabIndex = 20;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &MyForm::button69_Click);
			// 
			// button70
			// 
			this->button70->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button70.BackgroundImage")));
			this->button70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button70->Location = System::Drawing::Point(395, 471);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(132, 82);
			this->button70->TabIndex = 19;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::button70_Click);
			// 
			// button71
			// 
			this->button71->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button71.BackgroundImage")));
			this->button71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button71->Location = System::Drawing::Point(179, 471);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(132, 82);
			this->button71->TabIndex = 18;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button71_Click);
			// 
			// button72
			// 
			this->button72->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button72.BackgroundImage")));
			this->button72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button72->Location = System::Drawing::Point(620, 338);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(132, 82);
			this->button72->TabIndex = 17;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button72_Click);
			// 
			// button73
			// 
			this->button73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button73.BackgroundImage")));
			this->button73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button73->Location = System::Drawing::Point(395, 338);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(132, 82);
			this->button73->TabIndex = 16;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button73_Click);
			// 
			// button74
			// 
			this->button74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button74.BackgroundImage")));
			this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button74->Location = System::Drawing::Point(179, 338);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(132, 82);
			this->button74->TabIndex = 15;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::button74_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Location = System::Drawing::Point(271, 68);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(342, 219);
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->button75);
			this->tabPage15->Controls->Add(this->button76);
			this->tabPage15->Controls->Add(this->button77);
			this->tabPage15->Controls->Add(this->button78);
			this->tabPage15->Controls->Add(this->button79);
			this->tabPage15->Controls->Add(this->button80);
			this->tabPage15->Controls->Add(this->pictureBox13);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Size = System::Drawing::Size(932, 624);
			this->tabPage15->TabIndex = 14;
			this->tabPage15->Text = L"tabPage15";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// button75
			// 
			this->button75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button75.BackgroundImage")));
			this->button75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button75->Location = System::Drawing::Point(620, 471);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(132, 82);
			this->button75->TabIndex = 20;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::button75_Click);
			// 
			// button76
			// 
			this->button76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button76.BackgroundImage")));
			this->button76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button76->Location = System::Drawing::Point(395, 471);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(132, 82);
			this->button76->TabIndex = 19;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::button76_Click);
			// 
			// button77
			// 
			this->button77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button77.BackgroundImage")));
			this->button77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button77->Location = System::Drawing::Point(179, 471);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(132, 82);
			this->button77->TabIndex = 18;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &MyForm::button77_Click);
			// 
			// button78
			// 
			this->button78->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button78.BackgroundImage")));
			this->button78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button78->Location = System::Drawing::Point(620, 338);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(132, 82);
			this->button78->TabIndex = 17;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &MyForm::button78_Click);
			// 
			// button79
			// 
			this->button79->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button79.BackgroundImage")));
			this->button79->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button79->Location = System::Drawing::Point(395, 338);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(132, 82);
			this->button79->TabIndex = 16;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &MyForm::button79_Click);
			// 
			// button80
			// 
			this->button80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button80.BackgroundImage")));
			this->button80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button80->Location = System::Drawing::Point(179, 338);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(132, 82);
			this->button80->TabIndex = 15;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &MyForm::button80_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(271, 68);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(342, 219);
			this->pictureBox13->TabIndex = 14;
			this->pictureBox13->TabStop = false;
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->button81);
			this->tabPage16->Controls->Add(this->button82);
			this->tabPage16->Controls->Add(this->button83);
			this->tabPage16->Controls->Add(this->button84);
			this->tabPage16->Controls->Add(this->button85);
			this->tabPage16->Controls->Add(this->button86);
			this->tabPage16->Controls->Add(this->pictureBox14);
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Size = System::Drawing::Size(932, 624);
			this->tabPage16->TabIndex = 15;
			this->tabPage16->Text = L"tabPage16";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// button81
			// 
			this->button81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button81.BackgroundImage")));
			this->button81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button81->Location = System::Drawing::Point(620, 471);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(132, 82);
			this->button81->TabIndex = 20;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &MyForm::button81_Click);
			// 
			// button82
			// 
			this->button82->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button82.BackgroundImage")));
			this->button82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button82->Location = System::Drawing::Point(395, 471);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(132, 82);
			this->button82->TabIndex = 19;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &MyForm::button82_Click);
			// 
			// button83
			// 
			this->button83->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button83.BackgroundImage")));
			this->button83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button83->Location = System::Drawing::Point(179, 471);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(132, 82);
			this->button83->TabIndex = 18;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &MyForm::button83_Click);
			// 
			// button84
			// 
			this->button84->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button84.BackgroundImage")));
			this->button84->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button84->Location = System::Drawing::Point(620, 338);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(132, 82);
			this->button84->TabIndex = 17;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &MyForm::button84_Click);
			// 
			// button85
			// 
			this->button85->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button85.BackgroundImage")));
			this->button85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button85->Location = System::Drawing::Point(395, 338);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(132, 82);
			this->button85->TabIndex = 16;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &MyForm::button85_Click);
			// 
			// button86
			// 
			this->button86->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button86.BackgroundImage")));
			this->button86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button86->Location = System::Drawing::Point(179, 338);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(132, 82);
			this->button86->TabIndex = 15;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &MyForm::button86_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Location = System::Drawing::Point(271, 68);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(342, 219);
			this->pictureBox14->TabIndex = 14;
			this->pictureBox14->TabStop = false;
			// 
			// tabPage17
			// 
			this->tabPage17->Controls->Add(this->button87);
			this->tabPage17->Controls->Add(this->button88);
			this->tabPage17->Controls->Add(this->button89);
			this->tabPage17->Controls->Add(this->button90);
			this->tabPage17->Controls->Add(this->button91);
			this->tabPage17->Controls->Add(this->button92);
			this->tabPage17->Controls->Add(this->pictureBox15);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(932, 624);
			this->tabPage17->TabIndex = 16;
			this->tabPage17->Text = L"tabPage17";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// button87
			// 
			this->button87->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button87.BackgroundImage")));
			this->button87->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button87->Location = System::Drawing::Point(620, 471);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(132, 82);
			this->button87->TabIndex = 20;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &MyForm::button87_Click);
			// 
			// button88
			// 
			this->button88->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button88.BackgroundImage")));
			this->button88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button88->Location = System::Drawing::Point(395, 471);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(132, 82);
			this->button88->TabIndex = 19;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &MyForm::button88_Click);
			// 
			// button89
			// 
			this->button89->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button89.BackgroundImage")));
			this->button89->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button89->Location = System::Drawing::Point(179, 471);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(132, 82);
			this->button89->TabIndex = 18;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &MyForm::button89_Click);
			// 
			// button90
			// 
			this->button90->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button90.BackgroundImage")));
			this->button90->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button90->Location = System::Drawing::Point(620, 338);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(132, 82);
			this->button90->TabIndex = 17;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &MyForm::button90_Click);
			// 
			// button91
			// 
			this->button91->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button91.BackgroundImage")));
			this->button91->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button91->Location = System::Drawing::Point(395, 338);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(132, 82);
			this->button91->TabIndex = 16;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &MyForm::button91_Click);
			// 
			// button92
			// 
			this->button92->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button92.BackgroundImage")));
			this->button92->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button92->Location = System::Drawing::Point(179, 338);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(132, 82);
			this->button92->TabIndex = 15;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &MyForm::button92_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Location = System::Drawing::Point(271, 68);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(342, 219);
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			// 
			// tabPage18
			// 
			this->tabPage18->Controls->Add(this->button93);
			this->tabPage18->Controls->Add(this->button94);
			this->tabPage18->Controls->Add(this->button95);
			this->tabPage18->Controls->Add(this->button96);
			this->tabPage18->Controls->Add(this->button97);
			this->tabPage18->Controls->Add(this->button98);
			this->tabPage18->Controls->Add(this->pictureBox16);
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Size = System::Drawing::Size(932, 624);
			this->tabPage18->TabIndex = 17;
			this->tabPage18->Text = L"tabPage18";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// button93
			// 
			this->button93->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button93.BackgroundImage")));
			this->button93->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button93->Location = System::Drawing::Point(620, 471);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(132, 82);
			this->button93->TabIndex = 20;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &MyForm::button93_Click);
			// 
			// button94
			// 
			this->button94->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button94.BackgroundImage")));
			this->button94->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button94->Location = System::Drawing::Point(395, 471);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(132, 82);
			this->button94->TabIndex = 19;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &MyForm::button94_Click);
			// 
			// button95
			// 
			this->button95->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button95.BackgroundImage")));
			this->button95->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button95->Location = System::Drawing::Point(179, 471);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(132, 82);
			this->button95->TabIndex = 18;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &MyForm::button95_Click);
			// 
			// button96
			// 
			this->button96->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button96.BackgroundImage")));
			this->button96->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button96->Location = System::Drawing::Point(620, 338);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(132, 82);
			this->button96->TabIndex = 17;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &MyForm::button96_Click);
			// 
			// button97
			// 
			this->button97->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button97.BackgroundImage")));
			this->button97->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button97->Location = System::Drawing::Point(395, 338);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(132, 82);
			this->button97->TabIndex = 16;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &MyForm::button97_Click);
			// 
			// button98
			// 
			this->button98->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button98.BackgroundImage")));
			this->button98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button98->Location = System::Drawing::Point(179, 338);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(132, 82);
			this->button98->TabIndex = 15;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &MyForm::button98_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(271, 68);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(342, 219);
			this->pictureBox16->TabIndex = 14;
			this->pictureBox16->TabStop = false;
			// 
			// tabPage19
			// 
			this->tabPage19->Controls->Add(this->button99);
			this->tabPage19->Controls->Add(this->button100);
			this->tabPage19->Controls->Add(this->button101);
			this->tabPage19->Controls->Add(this->button102);
			this->tabPage19->Controls->Add(this->button103);
			this->tabPage19->Controls->Add(this->button104);
			this->tabPage19->Controls->Add(this->pictureBox17);
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Size = System::Drawing::Size(932, 624);
			this->tabPage19->TabIndex = 18;
			this->tabPage19->Text = L"tabPage19";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// button99
			// 
			this->button99->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button99.BackgroundImage")));
			this->button99->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button99->Location = System::Drawing::Point(620, 471);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(132, 82);
			this->button99->TabIndex = 20;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &MyForm::button99_Click);
			// 
			// button100
			// 
			this->button100->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button100.BackgroundImage")));
			this->button100->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button100->Location = System::Drawing::Point(395, 471);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(132, 82);
			this->button100->TabIndex = 19;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &MyForm::button100_Click);
			// 
			// button101
			// 
			this->button101->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button101.BackgroundImage")));
			this->button101->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button101->Location = System::Drawing::Point(179, 471);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(132, 82);
			this->button101->TabIndex = 18;
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &MyForm::button101_Click);
			// 
			// button102
			// 
			this->button102->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button102.BackgroundImage")));
			this->button102->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button102->Location = System::Drawing::Point(620, 338);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(132, 82);
			this->button102->TabIndex = 17;
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &MyForm::button102_Click);
			// 
			// button103
			// 
			this->button103->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button103.BackgroundImage")));
			this->button103->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button103->Location = System::Drawing::Point(395, 338);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(132, 82);
			this->button103->TabIndex = 16;
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &MyForm::button103_Click);
			// 
			// button104
			// 
			this->button104->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button104.BackgroundImage")));
			this->button104->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button104->Location = System::Drawing::Point(179, 338);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(132, 82);
			this->button104->TabIndex = 15;
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &MyForm::button104_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Location = System::Drawing::Point(271, 68);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(342, 219);
			this->pictureBox17->TabIndex = 14;
			this->pictureBox17->TabStop = false;
			// 
			// tabPage20
			// 
			this->tabPage20->Controls->Add(this->button105);
			this->tabPage20->Controls->Add(this->button106);
			this->tabPage20->Controls->Add(this->button107);
			this->tabPage20->Controls->Add(this->button108);
			this->tabPage20->Controls->Add(this->button109);
			this->tabPage20->Controls->Add(this->button110);
			this->tabPage20->Controls->Add(this->pictureBox18);
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Size = System::Drawing::Size(932, 624);
			this->tabPage20->TabIndex = 19;
			this->tabPage20->Text = L"tabPage20";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// button105
			// 
			this->button105->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button105.BackgroundImage")));
			this->button105->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button105->Location = System::Drawing::Point(620, 471);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(132, 82);
			this->button105->TabIndex = 20;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &MyForm::button105_Click);
			// 
			// button106
			// 
			this->button106->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button106.BackgroundImage")));
			this->button106->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button106->Location = System::Drawing::Point(395, 471);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(132, 82);
			this->button106->TabIndex = 19;
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &MyForm::button106_Click);
			// 
			// button107
			// 
			this->button107->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button107.BackgroundImage")));
			this->button107->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button107->Location = System::Drawing::Point(179, 471);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(132, 82);
			this->button107->TabIndex = 18;
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &MyForm::button107_Click);
			// 
			// button108
			// 
			this->button108->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button108.BackgroundImage")));
			this->button108->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button108->Location = System::Drawing::Point(620, 338);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(132, 82);
			this->button108->TabIndex = 17;
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &MyForm::button108_Click);
			// 
			// button109
			// 
			this->button109->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button109.BackgroundImage")));
			this->button109->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button109->Location = System::Drawing::Point(395, 338);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(132, 82);
			this->button109->TabIndex = 16;
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &MyForm::button109_Click);
			// 
			// button110
			// 
			this->button110->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button110.BackgroundImage")));
			this->button110->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button110->Location = System::Drawing::Point(179, 338);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(132, 82);
			this->button110->TabIndex = 15;
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &MyForm::button110_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->Location = System::Drawing::Point(271, 68);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(342, 219);
			this->pictureBox18->TabIndex = 14;
			this->pictureBox18->TabStop = false;
			// 
			// tabPage21
			// 
			this->tabPage21->Controls->Add(this->button111);
			this->tabPage21->Controls->Add(this->button112);
			this->tabPage21->Controls->Add(this->button113);
			this->tabPage21->Controls->Add(this->button114);
			this->tabPage21->Controls->Add(this->button115);
			this->tabPage21->Controls->Add(this->button116);
			this->tabPage21->Controls->Add(this->pictureBox19);
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Size = System::Drawing::Size(932, 624);
			this->tabPage21->TabIndex = 20;
			this->tabPage21->Text = L"tabPage21";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// button111
			// 
			this->button111->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button111.BackgroundImage")));
			this->button111->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button111->Location = System::Drawing::Point(620, 471);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(132, 82);
			this->button111->TabIndex = 20;
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &MyForm::button111_Click);
			// 
			// button112
			// 
			this->button112->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button112.BackgroundImage")));
			this->button112->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button112->Location = System::Drawing::Point(395, 471);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(132, 82);
			this->button112->TabIndex = 19;
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &MyForm::button112_Click);
			// 
			// button113
			// 
			this->button113->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button113.BackgroundImage")));
			this->button113->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button113->Location = System::Drawing::Point(179, 471);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(132, 82);
			this->button113->TabIndex = 18;
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &MyForm::button113_Click);
			// 
			// button114
			// 
			this->button114->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button114.BackgroundImage")));
			this->button114->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button114->Location = System::Drawing::Point(620, 338);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(132, 82);
			this->button114->TabIndex = 17;
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &MyForm::button114_Click);
			// 
			// button115
			// 
			this->button115->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button115.BackgroundImage")));
			this->button115->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button115->Location = System::Drawing::Point(395, 338);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(132, 82);
			this->button115->TabIndex = 16;
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &MyForm::button115_Click);
			// 
			// button116
			// 
			this->button116->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button116.BackgroundImage")));
			this->button116->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button116->Location = System::Drawing::Point(179, 338);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(132, 82);
			this->button116->TabIndex = 15;
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &MyForm::button116_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox19->Location = System::Drawing::Point(271, 68);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(342, 219);
			this->pictureBox19->TabIndex = 14;
			this->pictureBox19->TabStop = false;
			// 
			// tabPage22
			// 
			this->tabPage22->Controls->Add(this->button117);
			this->tabPage22->Controls->Add(this->button118);
			this->tabPage22->Controls->Add(this->button119);
			this->tabPage22->Controls->Add(this->button120);
			this->tabPage22->Controls->Add(this->button121);
			this->tabPage22->Controls->Add(this->button122);
			this->tabPage22->Controls->Add(this->pictureBox20);
			this->tabPage22->Location = System::Drawing::Point(4, 22);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Size = System::Drawing::Size(932, 624);
			this->tabPage22->TabIndex = 21;
			this->tabPage22->Text = L"tabPage22";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// button117
			// 
			this->button117->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button117.BackgroundImage")));
			this->button117->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button117->Location = System::Drawing::Point(620, 471);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(132, 82);
			this->button117->TabIndex = 20;
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &MyForm::button117_Click);
			// 
			// button118
			// 
			this->button118->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button118.BackgroundImage")));
			this->button118->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button118->Location = System::Drawing::Point(395, 471);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(132, 82);
			this->button118->TabIndex = 19;
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &MyForm::button118_Click);
			// 
			// button119
			// 
			this->button119->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button119.BackgroundImage")));
			this->button119->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button119->Location = System::Drawing::Point(179, 471);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(132, 82);
			this->button119->TabIndex = 18;
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &MyForm::button119_Click);
			// 
			// button120
			// 
			this->button120->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button120.BackgroundImage")));
			this->button120->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button120->Location = System::Drawing::Point(620, 338);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(132, 82);
			this->button120->TabIndex = 17;
			this->button120->UseVisualStyleBackColor = true;
			this->button120->Click += gcnew System::EventHandler(this, &MyForm::button120_Click);
			// 
			// button121
			// 
			this->button121->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button121.BackgroundImage")));
			this->button121->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button121->Location = System::Drawing::Point(395, 338);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(132, 82);
			this->button121->TabIndex = 16;
			this->button121->UseVisualStyleBackColor = true;
			this->button121->Click += gcnew System::EventHandler(this, &MyForm::button121_Click);
			// 
			// button122
			// 
			this->button122->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button122.BackgroundImage")));
			this->button122->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button122->Location = System::Drawing::Point(179, 338);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(132, 82);
			this->button122->TabIndex = 15;
			this->button122->UseVisualStyleBackColor = true;
			this->button122->Click += gcnew System::EventHandler(this, &MyForm::button122_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox20->Location = System::Drawing::Point(271, 68);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(342, 219);
			this->pictureBox20->TabIndex = 14;
			this->pictureBox20->TabStop = false;
			// 
			// tabPage23
			// 
			this->tabPage23->Controls->Add(this->button123);
			this->tabPage23->Controls->Add(this->button124);
			this->tabPage23->Controls->Add(this->button125);
			this->tabPage23->Controls->Add(this->button126);
			this->tabPage23->Controls->Add(this->button127);
			this->tabPage23->Controls->Add(this->button128);
			this->tabPage23->Controls->Add(this->pictureBox21);
			this->tabPage23->Location = System::Drawing::Point(4, 22);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Size = System::Drawing::Size(932, 624);
			this->tabPage23->TabIndex = 22;
			this->tabPage23->Text = L"tabPage23";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// button123
			// 
			this->button123->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button123.BackgroundImage")));
			this->button123->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button123->Location = System::Drawing::Point(620, 471);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(132, 82);
			this->button123->TabIndex = 20;
			this->button123->UseVisualStyleBackColor = true;
			this->button123->Click += gcnew System::EventHandler(this, &MyForm::button123_Click);
			// 
			// button124
			// 
			this->button124->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button124.BackgroundImage")));
			this->button124->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button124->Location = System::Drawing::Point(395, 471);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(132, 82);
			this->button124->TabIndex = 19;
			this->button124->UseVisualStyleBackColor = true;
			this->button124->Click += gcnew System::EventHandler(this, &MyForm::button124_Click);
			// 
			// button125
			// 
			this->button125->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button125.BackgroundImage")));
			this->button125->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button125->Location = System::Drawing::Point(179, 471);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(132, 82);
			this->button125->TabIndex = 18;
			this->button125->UseVisualStyleBackColor = true;
			this->button125->Click += gcnew System::EventHandler(this, &MyForm::button125_Click);
			// 
			// button126
			// 
			this->button126->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button126.BackgroundImage")));
			this->button126->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button126->Location = System::Drawing::Point(620, 338);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(132, 82);
			this->button126->TabIndex = 17;
			this->button126->UseVisualStyleBackColor = true;
			this->button126->Click += gcnew System::EventHandler(this, &MyForm::button126_Click);
			// 
			// button127
			// 
			this->button127->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button127.BackgroundImage")));
			this->button127->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button127->Location = System::Drawing::Point(395, 338);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(132, 82);
			this->button127->TabIndex = 16;
			this->button127->UseVisualStyleBackColor = true;
			this->button127->Click += gcnew System::EventHandler(this, &MyForm::button127_Click);
			// 
			// button128
			// 
			this->button128->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button128.BackgroundImage")));
			this->button128->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button128->Location = System::Drawing::Point(179, 338);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(132, 82);
			this->button128->TabIndex = 15;
			this->button128->UseVisualStyleBackColor = true;
			this->button128->Click += gcnew System::EventHandler(this, &MyForm::button128_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->Location = System::Drawing::Point(271, 68);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(342, 219);
			this->pictureBox21->TabIndex = 14;
			this->pictureBox21->TabStop = false;
			// 
			// tabPage24
			// 
			this->tabPage24->Controls->Add(this->button129);
			this->tabPage24->Controls->Add(this->button130);
			this->tabPage24->Controls->Add(this->button131);
			this->tabPage24->Controls->Add(this->button132);
			this->tabPage24->Controls->Add(this->button133);
			this->tabPage24->Controls->Add(this->button134);
			this->tabPage24->Controls->Add(this->pictureBox22);
			this->tabPage24->Location = System::Drawing::Point(4, 22);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Size = System::Drawing::Size(932, 624);
			this->tabPage24->TabIndex = 23;
			this->tabPage24->Text = L"tabPage24";
			this->tabPage24->UseVisualStyleBackColor = true;
			// 
			// button129
			// 
			this->button129->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button129.BackgroundImage")));
			this->button129->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button129->Location = System::Drawing::Point(620, 471);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(132, 82);
			this->button129->TabIndex = 20;
			this->button129->UseVisualStyleBackColor = true;
			this->button129->Click += gcnew System::EventHandler(this, &MyForm::button129_Click);
			// 
			// button130
			// 
			this->button130->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button130.BackgroundImage")));
			this->button130->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button130->Location = System::Drawing::Point(395, 471);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(132, 82);
			this->button130->TabIndex = 19;
			this->button130->UseVisualStyleBackColor = true;
			this->button130->Click += gcnew System::EventHandler(this, &MyForm::button130_Click);
			// 
			// button131
			// 
			this->button131->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button131.BackgroundImage")));
			this->button131->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button131->Location = System::Drawing::Point(179, 471);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(132, 82);
			this->button131->TabIndex = 18;
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &MyForm::button131_Click);
			// 
			// button132
			// 
			this->button132->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button132.BackgroundImage")));
			this->button132->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button132->Location = System::Drawing::Point(620, 338);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(132, 82);
			this->button132->TabIndex = 17;
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &MyForm::button132_Click);
			// 
			// button133
			// 
			this->button133->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button133.BackgroundImage")));
			this->button133->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button133->Location = System::Drawing::Point(395, 338);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(132, 82);
			this->button133->TabIndex = 16;
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &MyForm::button133_Click);
			// 
			// button134
			// 
			this->button134->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button134.BackgroundImage")));
			this->button134->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button134->Location = System::Drawing::Point(179, 338);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(132, 82);
			this->button134->TabIndex = 15;
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &MyForm::button134_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox22->Location = System::Drawing::Point(271, 68);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(342, 219);
			this->pictureBox22->TabIndex = 14;
			this->pictureBox22->TabStop = false;
			// 
			// tabPage25
			// 
			this->tabPage25->Controls->Add(this->button135);
			this->tabPage25->Controls->Add(this->button136);
			this->tabPage25->Controls->Add(this->button137);
			this->tabPage25->Controls->Add(this->button138);
			this->tabPage25->Controls->Add(this->button139);
			this->tabPage25->Controls->Add(this->button140);
			this->tabPage25->Controls->Add(this->pictureBox23);
			this->tabPage25->Location = System::Drawing::Point(4, 22);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Size = System::Drawing::Size(932, 624);
			this->tabPage25->TabIndex = 24;
			this->tabPage25->Text = L"tabPage25";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// button135
			// 
			this->button135->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button135.BackgroundImage")));
			this->button135->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button135->Location = System::Drawing::Point(620, 471);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(132, 82);
			this->button135->TabIndex = 20;
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &MyForm::button135_Click);
			// 
			// button136
			// 
			this->button136->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button136.BackgroundImage")));
			this->button136->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button136->Location = System::Drawing::Point(395, 471);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(132, 82);
			this->button136->TabIndex = 19;
			this->button136->UseVisualStyleBackColor = true;
			this->button136->Click += gcnew System::EventHandler(this, &MyForm::button136_Click);
			// 
			// button137
			// 
			this->button137->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button137.BackgroundImage")));
			this->button137->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button137->Location = System::Drawing::Point(179, 471);
			this->button137->Name = L"button137";
			this->button137->Size = System::Drawing::Size(132, 82);
			this->button137->TabIndex = 18;
			this->button137->UseVisualStyleBackColor = true;
			this->button137->Click += gcnew System::EventHandler(this, &MyForm::button137_Click);
			// 
			// button138
			// 
			this->button138->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button138.BackgroundImage")));
			this->button138->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button138->Location = System::Drawing::Point(620, 338);
			this->button138->Name = L"button138";
			this->button138->Size = System::Drawing::Size(132, 82);
			this->button138->TabIndex = 17;
			this->button138->UseVisualStyleBackColor = true;
			this->button138->Click += gcnew System::EventHandler(this, &MyForm::button138_Click);
			// 
			// button139
			// 
			this->button139->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button139.BackgroundImage")));
			this->button139->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button139->Location = System::Drawing::Point(395, 338);
			this->button139->Name = L"button139";
			this->button139->Size = System::Drawing::Size(132, 82);
			this->button139->TabIndex = 16;
			this->button139->UseVisualStyleBackColor = true;
			this->button139->Click += gcnew System::EventHandler(this, &MyForm::button139_Click);
			// 
			// button140
			// 
			this->button140->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button140.BackgroundImage")));
			this->button140->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button140->Location = System::Drawing::Point(179, 338);
			this->button140->Name = L"button140";
			this->button140->Size = System::Drawing::Size(132, 82);
			this->button140->TabIndex = 15;
			this->button140->UseVisualStyleBackColor = true;
			this->button140->Click += gcnew System::EventHandler(this, &MyForm::button140_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox23->Location = System::Drawing::Point(271, 68);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(342, 219);
			this->pictureBox23->TabIndex = 14;
			this->pictureBox23->TabStop = false;
			// 
			// tabPage26
			// 
			this->tabPage26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage26->Controls->Add(this->button141);
			this->tabPage26->Controls->Add(this->button142);
			this->tabPage26->Controls->Add(this->button143);
			this->tabPage26->Controls->Add(this->button144);
			this->tabPage26->Controls->Add(this->button145);
			this->tabPage26->Controls->Add(this->button146);
			this->tabPage26->Controls->Add(this->pictureBox24);
			this->tabPage26->Location = System::Drawing::Point(4, 22);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Size = System::Drawing::Size(932, 624);
			this->tabPage26->TabIndex = 25;
			this->tabPage26->Text = L"tabPage26";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// button141
			// 
			this->button141->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button141.BackgroundImage")));
			this->button141->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button141->Location = System::Drawing::Point(620, 471);
			this->button141->Name = L"button141";
			this->button141->Size = System::Drawing::Size(132, 82);
			this->button141->TabIndex = 20;
			this->button141->UseVisualStyleBackColor = true;
			this->button141->Click += gcnew System::EventHandler(this, &MyForm::button141_Click);
			// 
			// button142
			// 
			this->button142->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button142.BackgroundImage")));
			this->button142->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button142->Location = System::Drawing::Point(395, 471);
			this->button142->Name = L"button142";
			this->button142->Size = System::Drawing::Size(132, 82);
			this->button142->TabIndex = 19;
			this->button142->UseVisualStyleBackColor = true;
			this->button142->Click += gcnew System::EventHandler(this, &MyForm::button142_Click);
			// 
			// button143
			// 
			this->button143->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button143.BackgroundImage")));
			this->button143->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button143->Location = System::Drawing::Point(179, 471);
			this->button143->Name = L"button143";
			this->button143->Size = System::Drawing::Size(132, 82);
			this->button143->TabIndex = 18;
			this->button143->UseVisualStyleBackColor = true;
			this->button143->Click += gcnew System::EventHandler(this, &MyForm::button143_Click);
			// 
			// button144
			// 
			this->button144->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button144.BackgroundImage")));
			this->button144->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button144->Location = System::Drawing::Point(620, 338);
			this->button144->Name = L"button144";
			this->button144->Size = System::Drawing::Size(132, 82);
			this->button144->TabIndex = 17;
			this->button144->UseVisualStyleBackColor = true;
			this->button144->Click += gcnew System::EventHandler(this, &MyForm::button144_Click);
			// 
			// button145
			// 
			this->button145->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button145.BackgroundImage")));
			this->button145->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button145->Location = System::Drawing::Point(395, 338);
			this->button145->Name = L"button145";
			this->button145->Size = System::Drawing::Size(132, 82);
			this->button145->TabIndex = 16;
			this->button145->UseVisualStyleBackColor = true;
			this->button145->Click += gcnew System::EventHandler(this, &MyForm::button145_Click);
			// 
			// button146
			// 
			this->button146->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button146.BackgroundImage")));
			this->button146->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button146->Location = System::Drawing::Point(179, 338);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(132, 82);
			this->button146->TabIndex = 15;
			this->button146->UseVisualStyleBackColor = true;
			this->button146->Click += gcnew System::EventHandler(this, &MyForm::button146_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->Location = System::Drawing::Point(271, 68);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(342, 219);
			this->pictureBox24->TabIndex = 14;
			this->pictureBox24->TabStop = false;
			// 
			// tabPage27
			// 
			this->tabPage27->Controls->Add(this->button153);
			this->tabPage27->Controls->Add(this->button154);
			this->tabPage27->Controls->Add(this->button147);
			this->tabPage27->Controls->Add(this->button148);
			this->tabPage27->Controls->Add(this->button149);
			this->tabPage27->Controls->Add(this->button150);
			this->tabPage27->Controls->Add(this->button151);
			this->tabPage27->Controls->Add(this->button152);
			this->tabPage27->Controls->Add(this->pictureBox25);
			this->tabPage27->Location = System::Drawing::Point(4, 22);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Size = System::Drawing::Size(932, 624);
			this->tabPage27->TabIndex = 26;
			this->tabPage27->Text = L"tabPage27";
			this->tabPage27->UseVisualStyleBackColor = true;
			// 
			// button153
			// 
			this->button153->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button153.BackgroundImage")));
			this->button153->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button153->Location = System::Drawing::Point(722, 459);
			this->button153->Name = L"button153";
			this->button153->Size = System::Drawing::Size(120, 75);
			this->button153->TabIndex = 29;
			this->button153->UseVisualStyleBackColor = true;
			this->button153->Click += gcnew System::EventHandler(this, &MyForm::button153_Click);
			// 
			// button154
			// 
			this->button154->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button154.BackgroundImage")));
			this->button154->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button154->Location = System::Drawing::Point(722, 326);
			this->button154->Name = L"button154";
			this->button154->Size = System::Drawing::Size(120, 75);
			this->button154->TabIndex = 28;
			this->button154->UseVisualStyleBackColor = true;
			this->button154->Click += gcnew System::EventHandler(this, &MyForm::button154_Click);
			// 
			// button147
			// 
			this->button147->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button147.BackgroundImage")));
			this->button147->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button147->Location = System::Drawing::Point(507, 459);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(120, 75);
			this->button147->TabIndex = 27;
			this->button147->UseVisualStyleBackColor = true;
			this->button147->Click += gcnew System::EventHandler(this, &MyForm::button147_Click);
			// 
			// button148
			// 
			this->button148->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button148.BackgroundImage")));
			this->button148->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button148->Location = System::Drawing::Point(298, 459);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(120, 75);
			this->button148->TabIndex = 26;
			this->button148->UseVisualStyleBackColor = true;
			this->button148->Click += gcnew System::EventHandler(this, &MyForm::button148_Click);
			// 
			// button149
			// 
			this->button149->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button149.BackgroundImage")));
			this->button149->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button149->Location = System::Drawing::Point(75, 459);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(120, 75);
			this->button149->TabIndex = 25;
			this->button149->UseVisualStyleBackColor = true;
			this->button149->Click += gcnew System::EventHandler(this, &MyForm::button149_Click);
			// 
			// button150
			// 
			this->button150->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button150.BackgroundImage")));
			this->button150->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button150->Location = System::Drawing::Point(507, 326);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(120, 75);
			this->button150->TabIndex = 24;
			this->button150->UseVisualStyleBackColor = true;
			this->button150->Click += gcnew System::EventHandler(this, &MyForm::button150_Click);
			// 
			// button151
			// 
			this->button151->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button151.BackgroundImage")));
			this->button151->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button151->Location = System::Drawing::Point(298, 326);
			this->button151->Name = L"button151";
			this->button151->Size = System::Drawing::Size(120, 75);
			this->button151->TabIndex = 23;
			this->button151->UseVisualStyleBackColor = true;
			this->button151->Click += gcnew System::EventHandler(this, &MyForm::button151_Click);
			// 
			// button152
			// 
			this->button152->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button152.BackgroundImage")));
			this->button152->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button152->Location = System::Drawing::Point(75, 326);
			this->button152->Name = L"button152";
			this->button152->Size = System::Drawing::Size(120, 75);
			this->button152->TabIndex = 22;
			this->button152->UseVisualStyleBackColor = true;
			this->button152->Click += gcnew System::EventHandler(this, &MyForm::button152_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox25->Location = System::Drawing::Point(321, 45);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(296, 247);
			this->pictureBox25->TabIndex = 21;
			this->pictureBox25->TabStop = false;
			// 
			// tabPage28
			// 
			this->tabPage28->Controls->Add(this->button155);
			this->tabPage28->Controls->Add(this->button156);
			this->tabPage28->Controls->Add(this->button157);
			this->tabPage28->Controls->Add(this->button158);
			this->tabPage28->Controls->Add(this->button159);
			this->tabPage28->Controls->Add(this->button160);
			this->tabPage28->Controls->Add(this->button161);
			this->tabPage28->Controls->Add(this->button162);
			this->tabPage28->Controls->Add(this->pictureBox26);
			this->tabPage28->Location = System::Drawing::Point(4, 22);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Size = System::Drawing::Size(932, 624);
			this->tabPage28->TabIndex = 27;
			this->tabPage28->Text = L"tabPage28";
			this->tabPage28->UseVisualStyleBackColor = true;
			// 
			// button155
			// 
			this->button155->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button155.BackgroundImage")));
			this->button155->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button155->Location = System::Drawing::Point(732, 471);
			this->button155->Name = L"button155";
			this->button155->Size = System::Drawing::Size(120, 75);
			this->button155->TabIndex = 38;
			this->button155->UseVisualStyleBackColor = true;
			this->button155->Click += gcnew System::EventHandler(this, &MyForm::button155_Click);
			// 
			// button156
			// 
			this->button156->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button156.BackgroundImage")));
			this->button156->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button156->Location = System::Drawing::Point(732, 338);
			this->button156->Name = L"button156";
			this->button156->Size = System::Drawing::Size(120, 75);
			this->button156->TabIndex = 37;
			this->button156->UseVisualStyleBackColor = true;
			this->button156->Click += gcnew System::EventHandler(this, &MyForm::button156_Click);
			// 
			// button157
			// 
			this->button157->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button157.BackgroundImage")));
			this->button157->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button157->Location = System::Drawing::Point(517, 471);
			this->button157->Name = L"button157";
			this->button157->Size = System::Drawing::Size(120, 75);
			this->button157->TabIndex = 36;
			this->button157->UseVisualStyleBackColor = true;
			this->button157->Click += gcnew System::EventHandler(this, &MyForm::button157_Click);
			// 
			// button158
			// 
			this->button158->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button158.BackgroundImage")));
			this->button158->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button158->Location = System::Drawing::Point(308, 471);
			this->button158->Name = L"button158";
			this->button158->Size = System::Drawing::Size(120, 75);
			this->button158->TabIndex = 35;
			this->button158->UseVisualStyleBackColor = true;
			this->button158->Click += gcnew System::EventHandler(this, &MyForm::button158_Click);
			// 
			// button159
			// 
			this->button159->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button159.BackgroundImage")));
			this->button159->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button159->Location = System::Drawing::Point(85, 471);
			this->button159->Name = L"button159";
			this->button159->Size = System::Drawing::Size(120, 75);
			this->button159->TabIndex = 34;
			this->button159->UseVisualStyleBackColor = true;
			this->button159->Click += gcnew System::EventHandler(this, &MyForm::button159_Click);
			// 
			// button160
			// 
			this->button160->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button160.BackgroundImage")));
			this->button160->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button160->Location = System::Drawing::Point(517, 338);
			this->button160->Name = L"button160";
			this->button160->Size = System::Drawing::Size(120, 75);
			this->button160->TabIndex = 33;
			this->button160->UseVisualStyleBackColor = true;
			this->button160->Click += gcnew System::EventHandler(this, &MyForm::button160_Click);
			// 
			// button161
			// 
			this->button161->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button161.BackgroundImage")));
			this->button161->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button161->Location = System::Drawing::Point(308, 338);
			this->button161->Name = L"button161";
			this->button161->Size = System::Drawing::Size(120, 75);
			this->button161->TabIndex = 32;
			this->button161->UseVisualStyleBackColor = true;
			this->button161->Click += gcnew System::EventHandler(this, &MyForm::button161_Click);
			// 
			// button162
			// 
			this->button162->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button162.BackgroundImage")));
			this->button162->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button162->Location = System::Drawing::Point(85, 338);
			this->button162->Name = L"button162";
			this->button162->Size = System::Drawing::Size(120, 75);
			this->button162->TabIndex = 31;
			this->button162->UseVisualStyleBackColor = true;
			this->button162->Click += gcnew System::EventHandler(this, &MyForm::button162_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox26->Location = System::Drawing::Point(331, 57);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(296, 247);
			this->pictureBox26->TabIndex = 30;
			this->pictureBox26->TabStop = false;
			// 
			// tabPage29
			// 
			this->tabPage29->Controls->Add(this->button163);
			this->tabPage29->Controls->Add(this->button164);
			this->tabPage29->Controls->Add(this->button165);
			this->tabPage29->Controls->Add(this->button166);
			this->tabPage29->Controls->Add(this->button167);
			this->tabPage29->Controls->Add(this->button168);
			this->tabPage29->Controls->Add(this->button169);
			this->tabPage29->Controls->Add(this->button170);
			this->tabPage29->Controls->Add(this->pictureBox27);
			this->tabPage29->Location = System::Drawing::Point(4, 22);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Size = System::Drawing::Size(932, 624);
			this->tabPage29->TabIndex = 28;
			this->tabPage29->Text = L"tabPage29";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// button163
			// 
			this->button163->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button163.BackgroundImage")));
			this->button163->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button163->Location = System::Drawing::Point(730, 471);
			this->button163->Name = L"button163";
			this->button163->Size = System::Drawing::Size(120, 75);
			this->button163->TabIndex = 38;
			this->button163->UseVisualStyleBackColor = true;
			this->button163->Click += gcnew System::EventHandler(this, &MyForm::button163_Click);
			// 
			// button164
			// 
			this->button164->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button164.BackgroundImage")));
			this->button164->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button164->Location = System::Drawing::Point(730, 338);
			this->button164->Name = L"button164";
			this->button164->Size = System::Drawing::Size(120, 75);
			this->button164->TabIndex = 37;
			this->button164->UseVisualStyleBackColor = true;
			this->button164->Click += gcnew System::EventHandler(this, &MyForm::button164_Click);
			// 
			// button165
			// 
			this->button165->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button165.BackgroundImage")));
			this->button165->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button165->Location = System::Drawing::Point(515, 471);
			this->button165->Name = L"button165";
			this->button165->Size = System::Drawing::Size(120, 75);
			this->button165->TabIndex = 36;
			this->button165->UseVisualStyleBackColor = true;
			this->button165->Click += gcnew System::EventHandler(this, &MyForm::button165_Click);
			// 
			// button166
			// 
			this->button166->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button166.BackgroundImage")));
			this->button166->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button166->Location = System::Drawing::Point(306, 471);
			this->button166->Name = L"button166";
			this->button166->Size = System::Drawing::Size(120, 75);
			this->button166->TabIndex = 35;
			this->button166->UseVisualStyleBackColor = true;
			this->button166->Click += gcnew System::EventHandler(this, &MyForm::button166_Click);
			// 
			// button167
			// 
			this->button167->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button167.BackgroundImage")));
			this->button167->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button167->Location = System::Drawing::Point(83, 471);
			this->button167->Name = L"button167";
			this->button167->Size = System::Drawing::Size(120, 75);
			this->button167->TabIndex = 34;
			this->button167->UseVisualStyleBackColor = true;
			this->button167->Click += gcnew System::EventHandler(this, &MyForm::button167_Click);
			// 
			// button168
			// 
			this->button168->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button168.BackgroundImage")));
			this->button168->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button168->Location = System::Drawing::Point(515, 338);
			this->button168->Name = L"button168";
			this->button168->Size = System::Drawing::Size(120, 75);
			this->button168->TabIndex = 33;
			this->button168->UseVisualStyleBackColor = true;
			this->button168->Click += gcnew System::EventHandler(this, &MyForm::button168_Click);
			// 
			// button169
			// 
			this->button169->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button169.BackgroundImage")));
			this->button169->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button169->Location = System::Drawing::Point(306, 338);
			this->button169->Name = L"button169";
			this->button169->Size = System::Drawing::Size(120, 75);
			this->button169->TabIndex = 32;
			this->button169->UseVisualStyleBackColor = true;
			this->button169->Click += gcnew System::EventHandler(this, &MyForm::button169_Click);
			// 
			// button170
			// 
			this->button170->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button170.BackgroundImage")));
			this->button170->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button170->Location = System::Drawing::Point(83, 338);
			this->button170->Name = L"button170";
			this->button170->Size = System::Drawing::Size(120, 75);
			this->button170->TabIndex = 31;
			this->button170->UseVisualStyleBackColor = true;
			this->button170->Click += gcnew System::EventHandler(this, &MyForm::button170_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox27->Location = System::Drawing::Point(329, 57);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(296, 247);
			this->pictureBox27->TabIndex = 30;
			this->pictureBox27->TabStop = false;
			// 
			// tabPage30
			// 
			this->tabPage30->Controls->Add(this->button171);
			this->tabPage30->Controls->Add(this->button172);
			this->tabPage30->Controls->Add(this->button173);
			this->tabPage30->Controls->Add(this->button174);
			this->tabPage30->Controls->Add(this->button175);
			this->tabPage30->Controls->Add(this->button176);
			this->tabPage30->Controls->Add(this->button177);
			this->tabPage30->Controls->Add(this->button178);
			this->tabPage30->Controls->Add(this->pictureBox28);
			this->tabPage30->Location = System::Drawing::Point(4, 22);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Size = System::Drawing::Size(932, 624);
			this->tabPage30->TabIndex = 29;
			this->tabPage30->Text = L"tabPage30";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// button171
			// 
			this->button171->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button171.BackgroundImage")));
			this->button171->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button171->Location = System::Drawing::Point(731, 471);
			this->button171->Name = L"button171";
			this->button171->Size = System::Drawing::Size(120, 75);
			this->button171->TabIndex = 38;
			this->button171->UseVisualStyleBackColor = true;
			this->button171->Click += gcnew System::EventHandler(this, &MyForm::button171_Click);
			// 
			// button172
			// 
			this->button172->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button172.BackgroundImage")));
			this->button172->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button172->Location = System::Drawing::Point(731, 338);
			this->button172->Name = L"button172";
			this->button172->Size = System::Drawing::Size(120, 75);
			this->button172->TabIndex = 37;
			this->button172->UseVisualStyleBackColor = true;
			this->button172->Click += gcnew System::EventHandler(this, &MyForm::button172_Click);
			// 
			// button173
			// 
			this->button173->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button173.BackgroundImage")));
			this->button173->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button173->Location = System::Drawing::Point(516, 471);
			this->button173->Name = L"button173";
			this->button173->Size = System::Drawing::Size(120, 75);
			this->button173->TabIndex = 36;
			this->button173->UseVisualStyleBackColor = true;
			this->button173->Click += gcnew System::EventHandler(this, &MyForm::button173_Click);
			// 
			// button174
			// 
			this->button174->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button174.BackgroundImage")));
			this->button174->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button174->Location = System::Drawing::Point(307, 471);
			this->button174->Name = L"button174";
			this->button174->Size = System::Drawing::Size(120, 75);
			this->button174->TabIndex = 35;
			this->button174->UseVisualStyleBackColor = true;
			this->button174->Click += gcnew System::EventHandler(this, &MyForm::button174_Click);
			// 
			// button175
			// 
			this->button175->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button175.BackgroundImage")));
			this->button175->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button175->Location = System::Drawing::Point(84, 471);
			this->button175->Name = L"button175";
			this->button175->Size = System::Drawing::Size(120, 75);
			this->button175->TabIndex = 34;
			this->button175->UseVisualStyleBackColor = true;
			this->button175->Click += gcnew System::EventHandler(this, &MyForm::button175_Click);
			// 
			// button176
			// 
			this->button176->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button176.BackgroundImage")));
			this->button176->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button176->Location = System::Drawing::Point(516, 338);
			this->button176->Name = L"button176";
			this->button176->Size = System::Drawing::Size(120, 75);
			this->button176->TabIndex = 33;
			this->button176->UseVisualStyleBackColor = true;
			this->button176->Click += gcnew System::EventHandler(this, &MyForm::button176_Click);
			// 
			// button177
			// 
			this->button177->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button177.BackgroundImage")));
			this->button177->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button177->Location = System::Drawing::Point(307, 338);
			this->button177->Name = L"button177";
			this->button177->Size = System::Drawing::Size(120, 75);
			this->button177->TabIndex = 32;
			this->button177->UseVisualStyleBackColor = true;
			this->button177->Click += gcnew System::EventHandler(this, &MyForm::button177_Click);
			// 
			// button178
			// 
			this->button178->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button178.BackgroundImage")));
			this->button178->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button178->Location = System::Drawing::Point(84, 338);
			this->button178->Name = L"button178";
			this->button178->Size = System::Drawing::Size(120, 75);
			this->button178->TabIndex = 31;
			this->button178->UseVisualStyleBackColor = true;
			this->button178->Click += gcnew System::EventHandler(this, &MyForm::button178_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox28->Location = System::Drawing::Point(330, 57);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(296, 247);
			this->pictureBox28->TabIndex = 30;
			this->pictureBox28->TabStop = false;
			// 
			// tabPage31
			// 
			this->tabPage31->Controls->Add(this->button179);
			this->tabPage31->Controls->Add(this->button180);
			this->tabPage31->Controls->Add(this->button181);
			this->tabPage31->Controls->Add(this->button182);
			this->tabPage31->Controls->Add(this->button183);
			this->tabPage31->Controls->Add(this->button184);
			this->tabPage31->Controls->Add(this->button185);
			this->tabPage31->Controls->Add(this->button186);
			this->tabPage31->Controls->Add(this->pictureBox29);
			this->tabPage31->Location = System::Drawing::Point(4, 22);
			this->tabPage31->Name = L"tabPage31";
			this->tabPage31->Size = System::Drawing::Size(932, 624);
			this->tabPage31->TabIndex = 30;
			this->tabPage31->Text = L"tabPage31";
			this->tabPage31->UseVisualStyleBackColor = true;
			// 
			// button179
			// 
			this->button179->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button179.BackgroundImage")));
			this->button179->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button179->Location = System::Drawing::Point(732, 471);
			this->button179->Name = L"button179";
			this->button179->Size = System::Drawing::Size(120, 75);
			this->button179->TabIndex = 38;
			this->button179->UseVisualStyleBackColor = true;
			this->button179->Click += gcnew System::EventHandler(this, &MyForm::button179_Click);
			// 
			// button180
			// 
			this->button180->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button180.BackgroundImage")));
			this->button180->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button180->Location = System::Drawing::Point(732, 338);
			this->button180->Name = L"button180";
			this->button180->Size = System::Drawing::Size(120, 75);
			this->button180->TabIndex = 37;
			this->button180->UseVisualStyleBackColor = true;
			this->button180->Click += gcnew System::EventHandler(this, &MyForm::button180_Click);
			// 
			// button181
			// 
			this->button181->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button181.BackgroundImage")));
			this->button181->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button181->Location = System::Drawing::Point(517, 471);
			this->button181->Name = L"button181";
			this->button181->Size = System::Drawing::Size(120, 75);
			this->button181->TabIndex = 36;
			this->button181->UseVisualStyleBackColor = true;
			this->button181->Click += gcnew System::EventHandler(this, &MyForm::button181_Click);
			// 
			// button182
			// 
			this->button182->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button182.BackgroundImage")));
			this->button182->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button182->Location = System::Drawing::Point(308, 471);
			this->button182->Name = L"button182";
			this->button182->Size = System::Drawing::Size(120, 75);
			this->button182->TabIndex = 35;
			this->button182->UseVisualStyleBackColor = true;
			this->button182->Click += gcnew System::EventHandler(this, &MyForm::button182_Click);
			// 
			// button183
			// 
			this->button183->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button183.BackgroundImage")));
			this->button183->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button183->Location = System::Drawing::Point(85, 471);
			this->button183->Name = L"button183";
			this->button183->Size = System::Drawing::Size(120, 75);
			this->button183->TabIndex = 34;
			this->button183->UseVisualStyleBackColor = true;
			this->button183->Click += gcnew System::EventHandler(this, &MyForm::button183_Click);
			// 
			// button184
			// 
			this->button184->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button184.BackgroundImage")));
			this->button184->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button184->Location = System::Drawing::Point(517, 338);
			this->button184->Name = L"button184";
			this->button184->Size = System::Drawing::Size(120, 75);
			this->button184->TabIndex = 33;
			this->button184->UseVisualStyleBackColor = true;
			this->button184->Click += gcnew System::EventHandler(this, &MyForm::button184_Click);
			// 
			// button185
			// 
			this->button185->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button185.BackgroundImage")));
			this->button185->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button185->Location = System::Drawing::Point(308, 338);
			this->button185->Name = L"button185";
			this->button185->Size = System::Drawing::Size(120, 75);
			this->button185->TabIndex = 32;
			this->button185->UseVisualStyleBackColor = true;
			this->button185->Click += gcnew System::EventHandler(this, &MyForm::button185_Click);
			// 
			// button186
			// 
			this->button186->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button186.BackgroundImage")));
			this->button186->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button186->Location = System::Drawing::Point(85, 338);
			this->button186->Name = L"button186";
			this->button186->Size = System::Drawing::Size(120, 75);
			this->button186->TabIndex = 31;
			this->button186->UseVisualStyleBackColor = true;
			this->button186->Click += gcnew System::EventHandler(this, &MyForm::button186_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox29->Location = System::Drawing::Point(331, 57);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(296, 247);
			this->pictureBox29->TabIndex = 30;
			this->pictureBox29->TabStop = false;
			// 
			// tabPage32
			// 
			this->tabPage32->Controls->Add(this->button187);
			this->tabPage32->Controls->Add(this->button188);
			this->tabPage32->Controls->Add(this->button189);
			this->tabPage32->Controls->Add(this->button190);
			this->tabPage32->Controls->Add(this->button191);
			this->tabPage32->Controls->Add(this->button192);
			this->tabPage32->Controls->Add(this->button193);
			this->tabPage32->Controls->Add(this->button194);
			this->tabPage32->Controls->Add(this->pictureBox30);
			this->tabPage32->Location = System::Drawing::Point(4, 22);
			this->tabPage32->Name = L"tabPage32";
			this->tabPage32->Size = System::Drawing::Size(932, 624);
			this->tabPage32->TabIndex = 31;
			this->tabPage32->Text = L"tabPage32";
			this->tabPage32->UseVisualStyleBackColor = true;
			// 
			// button187
			// 
			this->button187->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button187.BackgroundImage")));
			this->button187->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button187->Location = System::Drawing::Point(729, 471);
			this->button187->Name = L"button187";
			this->button187->Size = System::Drawing::Size(120, 75);
			this->button187->TabIndex = 38;
			this->button187->UseVisualStyleBackColor = true;
			this->button187->Click += gcnew System::EventHandler(this, &MyForm::button187_Click);
			// 
			// button188
			// 
			this->button188->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button188.BackgroundImage")));
			this->button188->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button188->Location = System::Drawing::Point(729, 338);
			this->button188->Name = L"button188";
			this->button188->Size = System::Drawing::Size(120, 75);
			this->button188->TabIndex = 37;
			this->button188->UseVisualStyleBackColor = true;
			this->button188->Click += gcnew System::EventHandler(this, &MyForm::button188_Click);
			// 
			// button189
			// 
			this->button189->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button189.BackgroundImage")));
			this->button189->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button189->Location = System::Drawing::Point(514, 471);
			this->button189->Name = L"button189";
			this->button189->Size = System::Drawing::Size(120, 75);
			this->button189->TabIndex = 36;
			this->button189->UseVisualStyleBackColor = true;
			this->button189->Click += gcnew System::EventHandler(this, &MyForm::button189_Click);
			// 
			// button190
			// 
			this->button190->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button190.BackgroundImage")));
			this->button190->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button190->Location = System::Drawing::Point(305, 471);
			this->button190->Name = L"button190";
			this->button190->Size = System::Drawing::Size(120, 75);
			this->button190->TabIndex = 35;
			this->button190->UseVisualStyleBackColor = true;
			this->button190->Click += gcnew System::EventHandler(this, &MyForm::button190_Click);
			// 
			// button191
			// 
			this->button191->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button191.BackgroundImage")));
			this->button191->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button191->Location = System::Drawing::Point(82, 471);
			this->button191->Name = L"button191";
			this->button191->Size = System::Drawing::Size(120, 75);
			this->button191->TabIndex = 34;
			this->button191->UseVisualStyleBackColor = true;
			this->button191->Click += gcnew System::EventHandler(this, &MyForm::button191_Click);
			// 
			// button192
			// 
			this->button192->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button192.BackgroundImage")));
			this->button192->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button192->Location = System::Drawing::Point(514, 338);
			this->button192->Name = L"button192";
			this->button192->Size = System::Drawing::Size(120, 75);
			this->button192->TabIndex = 33;
			this->button192->UseVisualStyleBackColor = true;
			this->button192->Click += gcnew System::EventHandler(this, &MyForm::button192_Click);
			// 
			// button193
			// 
			this->button193->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button193.BackgroundImage")));
			this->button193->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button193->Location = System::Drawing::Point(305, 338);
			this->button193->Name = L"button193";
			this->button193->Size = System::Drawing::Size(120, 75);
			this->button193->TabIndex = 32;
			this->button193->UseVisualStyleBackColor = true;
			this->button193->Click += gcnew System::EventHandler(this, &MyForm::button193_Click);
			// 
			// button194
			// 
			this->button194->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button194.BackgroundImage")));
			this->button194->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button194->Location = System::Drawing::Point(82, 338);
			this->button194->Name = L"button194";
			this->button194->Size = System::Drawing::Size(120, 75);
			this->button194->TabIndex = 31;
			this->button194->UseVisualStyleBackColor = true;
			this->button194->Click += gcnew System::EventHandler(this, &MyForm::button194_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox30->Location = System::Drawing::Point(328, 57);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(296, 247);
			this->pictureBox30->TabIndex = 30;
			this->pictureBox30->TabStop = false;
			// 
			// tabPage33
			// 
			this->tabPage33->Controls->Add(this->button195);
			this->tabPage33->Controls->Add(this->button196);
			this->tabPage33->Controls->Add(this->button197);
			this->tabPage33->Controls->Add(this->button198);
			this->tabPage33->Controls->Add(this->button199);
			this->tabPage33->Controls->Add(this->button200);
			this->tabPage33->Controls->Add(this->button201);
			this->tabPage33->Controls->Add(this->button202);
			this->tabPage33->Controls->Add(this->pictureBox31);
			this->tabPage33->Location = System::Drawing::Point(4, 22);
			this->tabPage33->Name = L"tabPage33";
			this->tabPage33->Size = System::Drawing::Size(932, 624);
			this->tabPage33->TabIndex = 32;
			this->tabPage33->Text = L"tabPage33";
			this->tabPage33->UseVisualStyleBackColor = true;
			// 
			// button195
			// 
			this->button195->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button195.BackgroundImage")));
			this->button195->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button195->Location = System::Drawing::Point(732, 471);
			this->button195->Name = L"button195";
			this->button195->Size = System::Drawing::Size(120, 75);
			this->button195->TabIndex = 38;
			this->button195->UseVisualStyleBackColor = true;
			this->button195->Click += gcnew System::EventHandler(this, &MyForm::button195_Click);
			// 
			// button196
			// 
			this->button196->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button196.BackgroundImage")));
			this->button196->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button196->Location = System::Drawing::Point(732, 338);
			this->button196->Name = L"button196";
			this->button196->Size = System::Drawing::Size(120, 75);
			this->button196->TabIndex = 37;
			this->button196->UseVisualStyleBackColor = true;
			this->button196->Click += gcnew System::EventHandler(this, &MyForm::button196_Click);
			// 
			// button197
			// 
			this->button197->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button197.BackgroundImage")));
			this->button197->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button197->Location = System::Drawing::Point(517, 471);
			this->button197->Name = L"button197";
			this->button197->Size = System::Drawing::Size(120, 75);
			this->button197->TabIndex = 36;
			this->button197->UseVisualStyleBackColor = true;
			this->button197->Click += gcnew System::EventHandler(this, &MyForm::button197_Click);
			// 
			// button198
			// 
			this->button198->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button198.BackgroundImage")));
			this->button198->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button198->Location = System::Drawing::Point(308, 471);
			this->button198->Name = L"button198";
			this->button198->Size = System::Drawing::Size(120, 75);
			this->button198->TabIndex = 35;
			this->button198->UseVisualStyleBackColor = true;
			this->button198->Click += gcnew System::EventHandler(this, &MyForm::button198_Click);
			// 
			// button199
			// 
			this->button199->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button199.BackgroundImage")));
			this->button199->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button199->Location = System::Drawing::Point(85, 471);
			this->button199->Name = L"button199";
			this->button199->Size = System::Drawing::Size(120, 75);
			this->button199->TabIndex = 34;
			this->button199->UseVisualStyleBackColor = true;
			this->button199->Click += gcnew System::EventHandler(this, &MyForm::button199_Click);
			// 
			// button200
			// 
			this->button200->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button200.BackgroundImage")));
			this->button200->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button200->Location = System::Drawing::Point(517, 338);
			this->button200->Name = L"button200";
			this->button200->Size = System::Drawing::Size(120, 75);
			this->button200->TabIndex = 33;
			this->button200->UseVisualStyleBackColor = true;
			this->button200->Click += gcnew System::EventHandler(this, &MyForm::button200_Click);
			// 
			// button201
			// 
			this->button201->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button201.BackgroundImage")));
			this->button201->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button201->Location = System::Drawing::Point(308, 338);
			this->button201->Name = L"button201";
			this->button201->Size = System::Drawing::Size(120, 75);
			this->button201->TabIndex = 32;
			this->button201->UseVisualStyleBackColor = true;
			this->button201->Click += gcnew System::EventHandler(this, &MyForm::button201_Click);
			// 
			// button202
			// 
			this->button202->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button202.BackgroundImage")));
			this->button202->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button202->Location = System::Drawing::Point(85, 338);
			this->button202->Name = L"button202";
			this->button202->Size = System::Drawing::Size(120, 75);
			this->button202->TabIndex = 31;
			this->button202->UseVisualStyleBackColor = true;
			this->button202->Click += gcnew System::EventHandler(this, &MyForm::button202_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox31->Location = System::Drawing::Point(331, 57);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(296, 247);
			this->pictureBox31->TabIndex = 30;
			this->pictureBox31->TabStop = false;
			// 
			// tabPage34
			// 
			this->tabPage34->Controls->Add(this->button203);
			this->tabPage34->Controls->Add(this->button204);
			this->tabPage34->Controls->Add(this->button205);
			this->tabPage34->Controls->Add(this->button206);
			this->tabPage34->Controls->Add(this->button207);
			this->tabPage34->Controls->Add(this->button208);
			this->tabPage34->Controls->Add(this->button209);
			this->tabPage34->Controls->Add(this->button210);
			this->tabPage34->Controls->Add(this->pictureBox32);
			this->tabPage34->Location = System::Drawing::Point(4, 22);
			this->tabPage34->Name = L"tabPage34";
			this->tabPage34->Size = System::Drawing::Size(932, 624);
			this->tabPage34->TabIndex = 33;
			this->tabPage34->Text = L"tabPage34";
			this->tabPage34->UseVisualStyleBackColor = true;
			// 
			// button203
			// 
			this->button203->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button203.BackgroundImage")));
			this->button203->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button203->Location = System::Drawing::Point(732, 471);
			this->button203->Name = L"button203";
			this->button203->Size = System::Drawing::Size(120, 75);
			this->button203->TabIndex = 38;
			this->button203->UseVisualStyleBackColor = true;
			this->button203->Click += gcnew System::EventHandler(this, &MyForm::button203_Click);
			// 
			// button204
			// 
			this->button204->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button204.BackgroundImage")));
			this->button204->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button204->Location = System::Drawing::Point(732, 338);
			this->button204->Name = L"button204";
			this->button204->Size = System::Drawing::Size(120, 75);
			this->button204->TabIndex = 37;
			this->button204->UseVisualStyleBackColor = true;
			this->button204->Click += gcnew System::EventHandler(this, &MyForm::button204_Click);
			// 
			// button205
			// 
			this->button205->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button205.BackgroundImage")));
			this->button205->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button205->Location = System::Drawing::Point(517, 471);
			this->button205->Name = L"button205";
			this->button205->Size = System::Drawing::Size(120, 75);
			this->button205->TabIndex = 36;
			this->button205->UseVisualStyleBackColor = true;
			this->button205->Click += gcnew System::EventHandler(this, &MyForm::button205_Click);
			// 
			// button206
			// 
			this->button206->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button206.BackgroundImage")));
			this->button206->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button206->Location = System::Drawing::Point(308, 471);
			this->button206->Name = L"button206";
			this->button206->Size = System::Drawing::Size(120, 75);
			this->button206->TabIndex = 35;
			this->button206->UseVisualStyleBackColor = true;
			this->button206->Click += gcnew System::EventHandler(this, &MyForm::button206_Click);
			// 
			// button207
			// 
			this->button207->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button207.BackgroundImage")));
			this->button207->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button207->Location = System::Drawing::Point(85, 471);
			this->button207->Name = L"button207";
			this->button207->Size = System::Drawing::Size(120, 75);
			this->button207->TabIndex = 34;
			this->button207->UseVisualStyleBackColor = true;
			this->button207->Click += gcnew System::EventHandler(this, &MyForm::button207_Click);
			// 
			// button208
			// 
			this->button208->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button208.BackgroundImage")));
			this->button208->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button208->Location = System::Drawing::Point(517, 338);
			this->button208->Name = L"button208";
			this->button208->Size = System::Drawing::Size(120, 75);
			this->button208->TabIndex = 33;
			this->button208->UseVisualStyleBackColor = true;
			this->button208->Click += gcnew System::EventHandler(this, &MyForm::button208_Click);
			// 
			// button209
			// 
			this->button209->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button209.BackgroundImage")));
			this->button209->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button209->Location = System::Drawing::Point(308, 338);
			this->button209->Name = L"button209";
			this->button209->Size = System::Drawing::Size(120, 75);
			this->button209->TabIndex = 32;
			this->button209->UseVisualStyleBackColor = true;
			this->button209->Click += gcnew System::EventHandler(this, &MyForm::button209_Click);
			// 
			// button210
			// 
			this->button210->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button210.BackgroundImage")));
			this->button210->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button210->Location = System::Drawing::Point(85, 338);
			this->button210->Name = L"button210";
			this->button210->Size = System::Drawing::Size(120, 75);
			this->button210->TabIndex = 31;
			this->button210->UseVisualStyleBackColor = true;
			this->button210->Click += gcnew System::EventHandler(this, &MyForm::button210_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox32->Location = System::Drawing::Point(331, 57);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(296, 247);
			this->pictureBox32->TabIndex = 30;
			this->pictureBox32->TabStop = false;
			// 
			// tabPage35
			// 
			this->tabPage35->Controls->Add(this->button211);
			this->tabPage35->Controls->Add(this->button212);
			this->tabPage35->Controls->Add(this->button213);
			this->tabPage35->Controls->Add(this->button214);
			this->tabPage35->Controls->Add(this->button215);
			this->tabPage35->Controls->Add(this->button216);
			this->tabPage35->Controls->Add(this->button217);
			this->tabPage35->Controls->Add(this->button218);
			this->tabPage35->Controls->Add(this->pictureBox33);
			this->tabPage35->Location = System::Drawing::Point(4, 22);
			this->tabPage35->Name = L"tabPage35";
			this->tabPage35->Size = System::Drawing::Size(932, 624);
			this->tabPage35->TabIndex = 34;
			this->tabPage35->Text = L"tabPage35";
			this->tabPage35->UseVisualStyleBackColor = true;
			// 
			// button211
			// 
			this->button211->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button211.BackgroundImage")));
			this->button211->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button211->Location = System::Drawing::Point(732, 471);
			this->button211->Name = L"button211";
			this->button211->Size = System::Drawing::Size(120, 75);
			this->button211->TabIndex = 38;
			this->button211->UseVisualStyleBackColor = true;
			this->button211->Click += gcnew System::EventHandler(this, &MyForm::button211_Click);
			// 
			// button212
			// 
			this->button212->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button212.BackgroundImage")));
			this->button212->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button212->Location = System::Drawing::Point(732, 338);
			this->button212->Name = L"button212";
			this->button212->Size = System::Drawing::Size(120, 75);
			this->button212->TabIndex = 37;
			this->button212->UseVisualStyleBackColor = true;
			this->button212->Click += gcnew System::EventHandler(this, &MyForm::button212_Click);
			// 
			// button213
			// 
			this->button213->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button213.BackgroundImage")));
			this->button213->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button213->Location = System::Drawing::Point(517, 471);
			this->button213->Name = L"button213";
			this->button213->Size = System::Drawing::Size(120, 75);
			this->button213->TabIndex = 36;
			this->button213->UseVisualStyleBackColor = true;
			this->button213->Click += gcnew System::EventHandler(this, &MyForm::button213_Click);
			// 
			// button214
			// 
			this->button214->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button214.BackgroundImage")));
			this->button214->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button214->Location = System::Drawing::Point(308, 471);
			this->button214->Name = L"button214";
			this->button214->Size = System::Drawing::Size(120, 75);
			this->button214->TabIndex = 35;
			this->button214->UseVisualStyleBackColor = true;
			this->button214->Click += gcnew System::EventHandler(this, &MyForm::button214_Click);
			// 
			// button215
			// 
			this->button215->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button215.BackgroundImage")));
			this->button215->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button215->Location = System::Drawing::Point(85, 471);
			this->button215->Name = L"button215";
			this->button215->Size = System::Drawing::Size(120, 75);
			this->button215->TabIndex = 34;
			this->button215->UseVisualStyleBackColor = true;
			this->button215->Click += gcnew System::EventHandler(this, &MyForm::button215_Click);
			// 
			// button216
			// 
			this->button216->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button216.BackgroundImage")));
			this->button216->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button216->Location = System::Drawing::Point(517, 338);
			this->button216->Name = L"button216";
			this->button216->Size = System::Drawing::Size(120, 75);
			this->button216->TabIndex = 33;
			this->button216->UseVisualStyleBackColor = true;
			this->button216->Click += gcnew System::EventHandler(this, &MyForm::button216_Click);
			// 
			// button217
			// 
			this->button217->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button217.BackgroundImage")));
			this->button217->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button217->Location = System::Drawing::Point(308, 338);
			this->button217->Name = L"button217";
			this->button217->Size = System::Drawing::Size(120, 75);
			this->button217->TabIndex = 32;
			this->button217->UseVisualStyleBackColor = true;
			this->button217->Click += gcnew System::EventHandler(this, &MyForm::button217_Click);
			// 
			// button218
			// 
			this->button218->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button218.BackgroundImage")));
			this->button218->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button218->Location = System::Drawing::Point(85, 338);
			this->button218->Name = L"button218";
			this->button218->Size = System::Drawing::Size(120, 75);
			this->button218->TabIndex = 31;
			this->button218->UseVisualStyleBackColor = true;
			this->button218->Click += gcnew System::EventHandler(this, &MyForm::button218_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox33->Location = System::Drawing::Point(331, 57);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(296, 247);
			this->pictureBox33->TabIndex = 30;
			this->pictureBox33->TabStop = false;
			// 
			// tabPage36
			// 
			this->tabPage36->Controls->Add(this->button219);
			this->tabPage36->Controls->Add(this->button220);
			this->tabPage36->Controls->Add(this->button221);
			this->tabPage36->Controls->Add(this->button222);
			this->tabPage36->Controls->Add(this->button223);
			this->tabPage36->Controls->Add(this->button224);
			this->tabPage36->Controls->Add(this->button225);
			this->tabPage36->Controls->Add(this->button226);
			this->tabPage36->Controls->Add(this->pictureBox34);
			this->tabPage36->Location = System::Drawing::Point(4, 22);
			this->tabPage36->Name = L"tabPage36";
			this->tabPage36->Size = System::Drawing::Size(932, 624);
			this->tabPage36->TabIndex = 35;
			this->tabPage36->Text = L"tabPage36";
			this->tabPage36->UseVisualStyleBackColor = true;
			// 
			// button219
			// 
			this->button219->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button219.BackgroundImage")));
			this->button219->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button219->Location = System::Drawing::Point(734, 471);
			this->button219->Name = L"button219";
			this->button219->Size = System::Drawing::Size(120, 75);
			this->button219->TabIndex = 38;
			this->button219->UseVisualStyleBackColor = true;
			this->button219->Click += gcnew System::EventHandler(this, &MyForm::button219_Click);
			// 
			// button220
			// 
			this->button220->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button220.BackgroundImage")));
			this->button220->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button220->Location = System::Drawing::Point(734, 338);
			this->button220->Name = L"button220";
			this->button220->Size = System::Drawing::Size(120, 75);
			this->button220->TabIndex = 37;
			this->button220->UseVisualStyleBackColor = true;
			this->button220->Click += gcnew System::EventHandler(this, &MyForm::button220_Click);
			// 
			// button221
			// 
			this->button221->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button221.BackgroundImage")));
			this->button221->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button221->Location = System::Drawing::Point(519, 471);
			this->button221->Name = L"button221";
			this->button221->Size = System::Drawing::Size(120, 75);
			this->button221->TabIndex = 36;
			this->button221->UseVisualStyleBackColor = true;
			this->button221->Click += gcnew System::EventHandler(this, &MyForm::button221_Click);
			// 
			// button222
			// 
			this->button222->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button222.BackgroundImage")));
			this->button222->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button222->Location = System::Drawing::Point(310, 471);
			this->button222->Name = L"button222";
			this->button222->Size = System::Drawing::Size(120, 75);
			this->button222->TabIndex = 35;
			this->button222->UseVisualStyleBackColor = true;
			this->button222->Click += gcnew System::EventHandler(this, &MyForm::button222_Click);
			// 
			// button223
			// 
			this->button223->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button223.BackgroundImage")));
			this->button223->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button223->Location = System::Drawing::Point(87, 471);
			this->button223->Name = L"button223";
			this->button223->Size = System::Drawing::Size(120, 75);
			this->button223->TabIndex = 34;
			this->button223->UseVisualStyleBackColor = true;
			this->button223->Click += gcnew System::EventHandler(this, &MyForm::button223_Click);
			// 
			// button224
			// 
			this->button224->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button224.BackgroundImage")));
			this->button224->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button224->Location = System::Drawing::Point(519, 338);
			this->button224->Name = L"button224";
			this->button224->Size = System::Drawing::Size(120, 75);
			this->button224->TabIndex = 33;
			this->button224->UseVisualStyleBackColor = true;
			this->button224->Click += gcnew System::EventHandler(this, &MyForm::button224_Click);
			// 
			// button225
			// 
			this->button225->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button225.BackgroundImage")));
			this->button225->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button225->Location = System::Drawing::Point(310, 338);
			this->button225->Name = L"button225";
			this->button225->Size = System::Drawing::Size(120, 75);
			this->button225->TabIndex = 32;
			this->button225->UseVisualStyleBackColor = true;
			this->button225->Click += gcnew System::EventHandler(this, &MyForm::button225_Click);
			// 
			// button226
			// 
			this->button226->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button226.BackgroundImage")));
			this->button226->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button226->Location = System::Drawing::Point(87, 338);
			this->button226->Name = L"button226";
			this->button226->Size = System::Drawing::Size(120, 75);
			this->button226->TabIndex = 31;
			this->button226->UseVisualStyleBackColor = true;
			this->button226->Click += gcnew System::EventHandler(this, &MyForm::button226_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox34->Location = System::Drawing::Point(333, 57);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(296, 247);
			this->pictureBox34->TabIndex = 30;
			this->pictureBox34->TabStop = false;
			// 
			// tabPage37
			// 
			this->tabPage37->Controls->Add(this->button227);
			this->tabPage37->Controls->Add(this->button228);
			this->tabPage37->Controls->Add(this->button229);
			this->tabPage37->Controls->Add(this->button230);
			this->tabPage37->Controls->Add(this->button231);
			this->tabPage37->Controls->Add(this->button232);
			this->tabPage37->Controls->Add(this->button233);
			this->tabPage37->Controls->Add(this->button234);
			this->tabPage37->Controls->Add(this->pictureBox35);
			this->tabPage37->Location = System::Drawing::Point(4, 22);
			this->tabPage37->Name = L"tabPage37";
			this->tabPage37->Size = System::Drawing::Size(932, 624);
			this->tabPage37->TabIndex = 36;
			this->tabPage37->Text = L"tabPage37";
			this->tabPage37->UseVisualStyleBackColor = true;
			// 
			// button227
			// 
			this->button227->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button227.BackgroundImage")));
			this->button227->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button227->Location = System::Drawing::Point(731, 471);
			this->button227->Name = L"button227";
			this->button227->Size = System::Drawing::Size(120, 75);
			this->button227->TabIndex = 38;
			this->button227->UseVisualStyleBackColor = true;
			this->button227->Click += gcnew System::EventHandler(this, &MyForm::button227_Click);
			// 
			// button228
			// 
			this->button228->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button228.BackgroundImage")));
			this->button228->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button228->Location = System::Drawing::Point(731, 338);
			this->button228->Name = L"button228";
			this->button228->Size = System::Drawing::Size(120, 75);
			this->button228->TabIndex = 37;
			this->button228->UseVisualStyleBackColor = true;
			this->button228->Click += gcnew System::EventHandler(this, &MyForm::button228_Click);
			// 
			// button229
			// 
			this->button229->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button229.BackgroundImage")));
			this->button229->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button229->Location = System::Drawing::Point(516, 471);
			this->button229->Name = L"button229";
			this->button229->Size = System::Drawing::Size(120, 75);
			this->button229->TabIndex = 36;
			this->button229->UseVisualStyleBackColor = true;
			this->button229->Click += gcnew System::EventHandler(this, &MyForm::button229_Click);
			// 
			// button230
			// 
			this->button230->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button230.BackgroundImage")));
			this->button230->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button230->Location = System::Drawing::Point(307, 471);
			this->button230->Name = L"button230";
			this->button230->Size = System::Drawing::Size(120, 75);
			this->button230->TabIndex = 35;
			this->button230->UseVisualStyleBackColor = true;
			this->button230->Click += gcnew System::EventHandler(this, &MyForm::button230_Click);
			// 
			// button231
			// 
			this->button231->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button231.BackgroundImage")));
			this->button231->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button231->Location = System::Drawing::Point(84, 471);
			this->button231->Name = L"button231";
			this->button231->Size = System::Drawing::Size(120, 75);
			this->button231->TabIndex = 34;
			this->button231->UseVisualStyleBackColor = true;
			this->button231->Click += gcnew System::EventHandler(this, &MyForm::button231_Click);
			// 
			// button232
			// 
			this->button232->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button232.BackgroundImage")));
			this->button232->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button232->Location = System::Drawing::Point(516, 338);
			this->button232->Name = L"button232";
			this->button232->Size = System::Drawing::Size(120, 75);
			this->button232->TabIndex = 33;
			this->button232->UseVisualStyleBackColor = true;
			this->button232->Click += gcnew System::EventHandler(this, &MyForm::button232_Click);
			// 
			// button233
			// 
			this->button233->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button233.BackgroundImage")));
			this->button233->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button233->Location = System::Drawing::Point(307, 338);
			this->button233->Name = L"button233";
			this->button233->Size = System::Drawing::Size(120, 75);
			this->button233->TabIndex = 32;
			this->button233->UseVisualStyleBackColor = true;
			this->button233->Click += gcnew System::EventHandler(this, &MyForm::button233_Click);
			// 
			// button234
			// 
			this->button234->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button234.BackgroundImage")));
			this->button234->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button234->Location = System::Drawing::Point(84, 338);
			this->button234->Name = L"button234";
			this->button234->Size = System::Drawing::Size(120, 75);
			this->button234->TabIndex = 31;
			this->button234->UseVisualStyleBackColor = true;
			this->button234->Click += gcnew System::EventHandler(this, &MyForm::button234_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox35->Location = System::Drawing::Point(330, 57);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(296, 247);
			this->pictureBox35->TabIndex = 30;
			this->pictureBox35->TabStop = false;
			// 
			// tabPage38
			// 
			this->tabPage38->Controls->Add(this->button235);
			this->tabPage38->Controls->Add(this->button236);
			this->tabPage38->Controls->Add(this->button237);
			this->tabPage38->Controls->Add(this->button238);
			this->tabPage38->Controls->Add(this->button239);
			this->tabPage38->Controls->Add(this->button240);
			this->tabPage38->Controls->Add(this->button241);
			this->tabPage38->Controls->Add(this->button242);
			this->tabPage38->Controls->Add(this->pictureBox36);
			this->tabPage38->Location = System::Drawing::Point(4, 22);
			this->tabPage38->Name = L"tabPage38";
			this->tabPage38->Size = System::Drawing::Size(932, 624);
			this->tabPage38->TabIndex = 37;
			this->tabPage38->Text = L"tabPage38";
			this->tabPage38->UseVisualStyleBackColor = true;
			// 
			// button235
			// 
			this->button235->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button235.BackgroundImage")));
			this->button235->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button235->Location = System::Drawing::Point(735, 471);
			this->button235->Name = L"button235";
			this->button235->Size = System::Drawing::Size(120, 75);
			this->button235->TabIndex = 38;
			this->button235->UseVisualStyleBackColor = true;
			this->button235->Click += gcnew System::EventHandler(this, &MyForm::button235_Click);
			// 
			// button236
			// 
			this->button236->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button236.BackgroundImage")));
			this->button236->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button236->Location = System::Drawing::Point(735, 338);
			this->button236->Name = L"button236";
			this->button236->Size = System::Drawing::Size(120, 75);
			this->button236->TabIndex = 37;
			this->button236->UseVisualStyleBackColor = true;
			this->button236->Click += gcnew System::EventHandler(this, &MyForm::button236_Click);
			// 
			// button237
			// 
			this->button237->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button237.BackgroundImage")));
			this->button237->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button237->Location = System::Drawing::Point(520, 471);
			this->button237->Name = L"button237";
			this->button237->Size = System::Drawing::Size(120, 75);
			this->button237->TabIndex = 36;
			this->button237->UseVisualStyleBackColor = true;
			this->button237->Click += gcnew System::EventHandler(this, &MyForm::button237_Click);
			// 
			// button238
			// 
			this->button238->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button238.BackgroundImage")));
			this->button238->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button238->Location = System::Drawing::Point(311, 471);
			this->button238->Name = L"button238";
			this->button238->Size = System::Drawing::Size(120, 75);
			this->button238->TabIndex = 35;
			this->button238->UseVisualStyleBackColor = true;
			this->button238->Click += gcnew System::EventHandler(this, &MyForm::button238_Click);
			// 
			// button239
			// 
			this->button239->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button239.BackgroundImage")));
			this->button239->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button239->Location = System::Drawing::Point(88, 471);
			this->button239->Name = L"button239";
			this->button239->Size = System::Drawing::Size(120, 75);
			this->button239->TabIndex = 34;
			this->button239->UseVisualStyleBackColor = true;
			this->button239->Click += gcnew System::EventHandler(this, &MyForm::button239_Click);
			// 
			// button240
			// 
			this->button240->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button240.BackgroundImage")));
			this->button240->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button240->Location = System::Drawing::Point(520, 338);
			this->button240->Name = L"button240";
			this->button240->Size = System::Drawing::Size(120, 75);
			this->button240->TabIndex = 33;
			this->button240->UseVisualStyleBackColor = true;
			this->button240->Click += gcnew System::EventHandler(this, &MyForm::button240_Click);
			// 
			// button241
			// 
			this->button241->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button241.BackgroundImage")));
			this->button241->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button241->Location = System::Drawing::Point(311, 338);
			this->button241->Name = L"button241";
			this->button241->Size = System::Drawing::Size(120, 75);
			this->button241->TabIndex = 32;
			this->button241->UseVisualStyleBackColor = true;
			this->button241->Click += gcnew System::EventHandler(this, &MyForm::button241_Click);
			// 
			// button242
			// 
			this->button242->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button242.BackgroundImage")));
			this->button242->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button242->Location = System::Drawing::Point(88, 338);
			this->button242->Name = L"button242";
			this->button242->Size = System::Drawing::Size(120, 75);
			this->button242->TabIndex = 31;
			this->button242->UseVisualStyleBackColor = true;
			this->button242->Click += gcnew System::EventHandler(this, &MyForm::button242_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox36->Location = System::Drawing::Point(334, 57);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(296, 247);
			this->pictureBox36->TabIndex = 30;
			this->pictureBox36->TabStop = false;
			// 
			// tabPage39
			// 
			this->tabPage39->Controls->Add(this->button243);
			this->tabPage39->Controls->Add(this->button244);
			this->tabPage39->Controls->Add(this->button245);
			this->tabPage39->Controls->Add(this->button246);
			this->tabPage39->Controls->Add(this->button247);
			this->tabPage39->Controls->Add(this->button248);
			this->tabPage39->Controls->Add(this->button249);
			this->tabPage39->Controls->Add(this->button250);
			this->tabPage39->Controls->Add(this->pictureBox37);
			this->tabPage39->Location = System::Drawing::Point(4, 22);
			this->tabPage39->Name = L"tabPage39";
			this->tabPage39->Size = System::Drawing::Size(932, 624);
			this->tabPage39->TabIndex = 38;
			this->tabPage39->Text = L"tabPage39";
			this->tabPage39->UseVisualStyleBackColor = true;
			// 
			// button243
			// 
			this->button243->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button243.BackgroundImage")));
			this->button243->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button243->Location = System::Drawing::Point(733, 471);
			this->button243->Name = L"button243";
			this->button243->Size = System::Drawing::Size(120, 75);
			this->button243->TabIndex = 38;
			this->button243->UseVisualStyleBackColor = true;
			this->button243->Click += gcnew System::EventHandler(this, &MyForm::button243_Click);
			// 
			// button244
			// 
			this->button244->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button244.BackgroundImage")));
			this->button244->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button244->Location = System::Drawing::Point(733, 338);
			this->button244->Name = L"button244";
			this->button244->Size = System::Drawing::Size(120, 75);
			this->button244->TabIndex = 37;
			this->button244->UseVisualStyleBackColor = true;
			this->button244->Click += gcnew System::EventHandler(this, &MyForm::button244_Click);
			// 
			// button245
			// 
			this->button245->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button245.BackgroundImage")));
			this->button245->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button245->Location = System::Drawing::Point(518, 471);
			this->button245->Name = L"button245";
			this->button245->Size = System::Drawing::Size(120, 75);
			this->button245->TabIndex = 36;
			this->button245->UseVisualStyleBackColor = true;
			this->button245->Click += gcnew System::EventHandler(this, &MyForm::button245_Click);
			// 
			// button246
			// 
			this->button246->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button246.BackgroundImage")));
			this->button246->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button246->Location = System::Drawing::Point(309, 471);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(120, 75);
			this->button246->TabIndex = 35;
			this->button246->UseVisualStyleBackColor = true;
			this->button246->Click += gcnew System::EventHandler(this, &MyForm::button246_Click);
			// 
			// button247
			// 
			this->button247->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button247.BackgroundImage")));
			this->button247->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button247->Location = System::Drawing::Point(86, 471);
			this->button247->Name = L"button247";
			this->button247->Size = System::Drawing::Size(120, 75);
			this->button247->TabIndex = 34;
			this->button247->UseVisualStyleBackColor = true;
			this->button247->Click += gcnew System::EventHandler(this, &MyForm::button247_Click);
			// 
			// button248
			// 
			this->button248->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button248.BackgroundImage")));
			this->button248->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button248->Location = System::Drawing::Point(518, 338);
			this->button248->Name = L"button248";
			this->button248->Size = System::Drawing::Size(120, 75);
			this->button248->TabIndex = 33;
			this->button248->UseVisualStyleBackColor = true;
			this->button248->Click += gcnew System::EventHandler(this, &MyForm::button248_Click);
			// 
			// button249
			// 
			this->button249->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button249.BackgroundImage")));
			this->button249->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button249->Location = System::Drawing::Point(309, 338);
			this->button249->Name = L"button249";
			this->button249->Size = System::Drawing::Size(120, 75);
			this->button249->TabIndex = 32;
			this->button249->UseVisualStyleBackColor = true;
			this->button249->Click += gcnew System::EventHandler(this, &MyForm::button249_Click);
			// 
			// button250
			// 
			this->button250->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button250.BackgroundImage")));
			this->button250->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button250->Location = System::Drawing::Point(86, 338);
			this->button250->Name = L"button250";
			this->button250->Size = System::Drawing::Size(120, 75);
			this->button250->TabIndex = 31;
			this->button250->UseVisualStyleBackColor = true;
			this->button250->Click += gcnew System::EventHandler(this, &MyForm::button250_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox37->Location = System::Drawing::Point(332, 57);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(296, 247);
			this->pictureBox37->TabIndex = 30;
			this->pictureBox37->TabStop = false;
			// 
			// tabPage40
			// 
			this->tabPage40->Controls->Add(this->button251);
			this->tabPage40->Controls->Add(this->button252);
			this->tabPage40->Controls->Add(this->button253);
			this->tabPage40->Controls->Add(this->button254);
			this->tabPage40->Controls->Add(this->button255);
			this->tabPage40->Controls->Add(this->button256);
			this->tabPage40->Controls->Add(this->button257);
			this->tabPage40->Controls->Add(this->button258);
			this->tabPage40->Controls->Add(this->pictureBox38);
			this->tabPage40->Location = System::Drawing::Point(4, 22);
			this->tabPage40->Name = L"tabPage40";
			this->tabPage40->Size = System::Drawing::Size(932, 624);
			this->tabPage40->TabIndex = 39;
			this->tabPage40->Text = L"tabPage40";
			this->tabPage40->UseVisualStyleBackColor = true;
			// 
			// button251
			// 
			this->button251->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button251.BackgroundImage")));
			this->button251->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button251->Location = System::Drawing::Point(731, 471);
			this->button251->Name = L"button251";
			this->button251->Size = System::Drawing::Size(120, 75);
			this->button251->TabIndex = 38;
			this->button251->UseVisualStyleBackColor = true;
			this->button251->Click += gcnew System::EventHandler(this, &MyForm::button251_Click);
			// 
			// button252
			// 
			this->button252->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button252.BackgroundImage")));
			this->button252->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button252->Location = System::Drawing::Point(731, 338);
			this->button252->Name = L"button252";
			this->button252->Size = System::Drawing::Size(120, 75);
			this->button252->TabIndex = 37;
			this->button252->UseVisualStyleBackColor = true;
			this->button252->Click += gcnew System::EventHandler(this, &MyForm::button252_Click);
			// 
			// button253
			// 
			this->button253->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button253.BackgroundImage")));
			this->button253->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button253->Location = System::Drawing::Point(516, 471);
			this->button253->Name = L"button253";
			this->button253->Size = System::Drawing::Size(120, 75);
			this->button253->TabIndex = 36;
			this->button253->UseVisualStyleBackColor = true;
			this->button253->Click += gcnew System::EventHandler(this, &MyForm::button253_Click);
			// 
			// button254
			// 
			this->button254->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button254.BackgroundImage")));
			this->button254->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button254->Location = System::Drawing::Point(307, 471);
			this->button254->Name = L"button254";
			this->button254->Size = System::Drawing::Size(120, 75);
			this->button254->TabIndex = 35;
			this->button254->UseVisualStyleBackColor = true;
			this->button254->Click += gcnew System::EventHandler(this, &MyForm::button254_Click);
			// 
			// button255
			// 
			this->button255->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button255.BackgroundImage")));
			this->button255->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button255->Location = System::Drawing::Point(84, 471);
			this->button255->Name = L"button255";
			this->button255->Size = System::Drawing::Size(120, 75);
			this->button255->TabIndex = 34;
			this->button255->UseVisualStyleBackColor = true;
			this->button255->Click += gcnew System::EventHandler(this, &MyForm::button255_Click);
			// 
			// button256
			// 
			this->button256->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button256.BackgroundImage")));
			this->button256->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button256->Location = System::Drawing::Point(516, 338);
			this->button256->Name = L"button256";
			this->button256->Size = System::Drawing::Size(120, 75);
			this->button256->TabIndex = 33;
			this->button256->UseVisualStyleBackColor = true;
			this->button256->Click += gcnew System::EventHandler(this, &MyForm::button256_Click);
			// 
			// button257
			// 
			this->button257->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button257.BackgroundImage")));
			this->button257->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button257->Location = System::Drawing::Point(307, 338);
			this->button257->Name = L"button257";
			this->button257->Size = System::Drawing::Size(120, 75);
			this->button257->TabIndex = 32;
			this->button257->UseVisualStyleBackColor = true;
			this->button257->Click += gcnew System::EventHandler(this, &MyForm::button257_Click);
			// 
			// button258
			// 
			this->button258->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button258.BackgroundImage")));
			this->button258->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button258->Location = System::Drawing::Point(84, 338);
			this->button258->Name = L"button258";
			this->button258->Size = System::Drawing::Size(120, 75);
			this->button258->TabIndex = 31;
			this->button258->UseVisualStyleBackColor = true;
			this->button258->Click += gcnew System::EventHandler(this, &MyForm::button258_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox38->Location = System::Drawing::Point(330, 57);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(296, 247);
			this->pictureBox38->TabIndex = 30;
			this->pictureBox38->TabStop = false;
			// 
			// tabPage41
			// 
			this->tabPage41->Controls->Add(this->button259);
			this->tabPage41->Controls->Add(this->button260);
			this->tabPage41->Controls->Add(this->button261);
			this->tabPage41->Controls->Add(this->button262);
			this->tabPage41->Controls->Add(this->button263);
			this->tabPage41->Controls->Add(this->button264);
			this->tabPage41->Controls->Add(this->button265);
			this->tabPage41->Controls->Add(this->button266);
			this->tabPage41->Controls->Add(this->pictureBox39);
			this->tabPage41->Location = System::Drawing::Point(4, 22);
			this->tabPage41->Name = L"tabPage41";
			this->tabPage41->Size = System::Drawing::Size(932, 624);
			this->tabPage41->TabIndex = 40;
			this->tabPage41->Text = L"tabPage41";
			this->tabPage41->UseVisualStyleBackColor = true;
			// 
			// button259
			// 
			this->button259->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button259.BackgroundImage")));
			this->button259->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button259->Location = System::Drawing::Point(728, 471);
			this->button259->Name = L"button259";
			this->button259->Size = System::Drawing::Size(120, 75);
			this->button259->TabIndex = 38;
			this->button259->UseVisualStyleBackColor = true;
			this->button259->Click += gcnew System::EventHandler(this, &MyForm::button259_Click);
			// 
			// button260
			// 
			this->button260->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button260.BackgroundImage")));
			this->button260->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button260->Location = System::Drawing::Point(728, 338);
			this->button260->Name = L"button260";
			this->button260->Size = System::Drawing::Size(120, 75);
			this->button260->TabIndex = 37;
			this->button260->UseVisualStyleBackColor = true;
			this->button260->Click += gcnew System::EventHandler(this, &MyForm::button260_Click);
			// 
			// button261
			// 
			this->button261->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button261.BackgroundImage")));
			this->button261->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button261->Location = System::Drawing::Point(513, 471);
			this->button261->Name = L"button261";
			this->button261->Size = System::Drawing::Size(120, 75);
			this->button261->TabIndex = 36;
			this->button261->UseVisualStyleBackColor = true;
			this->button261->Click += gcnew System::EventHandler(this, &MyForm::button261_Click);
			// 
			// button262
			// 
			this->button262->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button262.BackgroundImage")));
			this->button262->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button262->Location = System::Drawing::Point(304, 471);
			this->button262->Name = L"button262";
			this->button262->Size = System::Drawing::Size(120, 75);
			this->button262->TabIndex = 35;
			this->button262->UseVisualStyleBackColor = true;
			this->button262->Click += gcnew System::EventHandler(this, &MyForm::button262_Click);
			// 
			// button263
			// 
			this->button263->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button263.BackgroundImage")));
			this->button263->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button263->Location = System::Drawing::Point(81, 471);
			this->button263->Name = L"button263";
			this->button263->Size = System::Drawing::Size(120, 75);
			this->button263->TabIndex = 34;
			this->button263->UseVisualStyleBackColor = true;
			this->button263->Click += gcnew System::EventHandler(this, &MyForm::button263_Click);
			// 
			// button264
			// 
			this->button264->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button264.BackgroundImage")));
			this->button264->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button264->Location = System::Drawing::Point(513, 338);
			this->button264->Name = L"button264";
			this->button264->Size = System::Drawing::Size(120, 75);
			this->button264->TabIndex = 33;
			this->button264->UseVisualStyleBackColor = true;
			this->button264->Click += gcnew System::EventHandler(this, &MyForm::button264_Click);
			// 
			// button265
			// 
			this->button265->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button265.BackgroundImage")));
			this->button265->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button265->Location = System::Drawing::Point(304, 338);
			this->button265->Name = L"button265";
			this->button265->Size = System::Drawing::Size(120, 75);
			this->button265->TabIndex = 32;
			this->button265->UseVisualStyleBackColor = true;
			this->button265->Click += gcnew System::EventHandler(this, &MyForm::button265_Click);
			// 
			// button266
			// 
			this->button266->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button266.BackgroundImage")));
			this->button266->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button266->Location = System::Drawing::Point(81, 338);
			this->button266->Name = L"button266";
			this->button266->Size = System::Drawing::Size(120, 75);
			this->button266->TabIndex = 31;
			this->button266->UseVisualStyleBackColor = true;
			this->button266->Click += gcnew System::EventHandler(this, &MyForm::button266_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.BackgroundImage")));
			this->pictureBox39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox39->Location = System::Drawing::Point(327, 57);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(296, 247);
			this->pictureBox39->TabIndex = 30;
			this->pictureBox39->TabStop = false;
			// 
			// tabPage42
			// 
			this->tabPage42->Controls->Add(this->button267);
			this->tabPage42->Controls->Add(this->button268);
			this->tabPage42->Controls->Add(this->button269);
			this->tabPage42->Controls->Add(this->button270);
			this->tabPage42->Controls->Add(this->button271);
			this->tabPage42->Controls->Add(this->button272);
			this->tabPage42->Controls->Add(this->button273);
			this->tabPage42->Controls->Add(this->button274);
			this->tabPage42->Controls->Add(this->pictureBox40);
			this->tabPage42->Location = System::Drawing::Point(4, 22);
			this->tabPage42->Name = L"tabPage42";
			this->tabPage42->Size = System::Drawing::Size(932, 624);
			this->tabPage42->TabIndex = 41;
			this->tabPage42->Text = L"tabPage42";
			this->tabPage42->UseVisualStyleBackColor = true;
			// 
			// button267
			// 
			this->button267->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button267.BackgroundImage")));
			this->button267->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button267->Location = System::Drawing::Point(730, 471);
			this->button267->Name = L"button267";
			this->button267->Size = System::Drawing::Size(120, 75);
			this->button267->TabIndex = 38;
			this->button267->UseVisualStyleBackColor = true;
			this->button267->Click += gcnew System::EventHandler(this, &MyForm::button267_Click);
			// 
			// button268
			// 
			this->button268->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button268.BackgroundImage")));
			this->button268->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button268->Location = System::Drawing::Point(730, 338);
			this->button268->Name = L"button268";
			this->button268->Size = System::Drawing::Size(120, 75);
			this->button268->TabIndex = 37;
			this->button268->UseVisualStyleBackColor = true;
			this->button268->Click += gcnew System::EventHandler(this, &MyForm::button268_Click);
			// 
			// button269
			// 
			this->button269->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button269.BackgroundImage")));
			this->button269->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button269->Location = System::Drawing::Point(515, 471);
			this->button269->Name = L"button269";
			this->button269->Size = System::Drawing::Size(120, 75);
			this->button269->TabIndex = 36;
			this->button269->UseVisualStyleBackColor = true;
			this->button269->Click += gcnew System::EventHandler(this, &MyForm::button269_Click);
			// 
			// button270
			// 
			this->button270->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button270.BackgroundImage")));
			this->button270->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button270->Location = System::Drawing::Point(306, 471);
			this->button270->Name = L"button270";
			this->button270->Size = System::Drawing::Size(120, 75);
			this->button270->TabIndex = 35;
			this->button270->UseVisualStyleBackColor = true;
			this->button270->Click += gcnew System::EventHandler(this, &MyForm::button270_Click);
			// 
			// button271
			// 
			this->button271->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button271.BackgroundImage")));
			this->button271->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button271->Location = System::Drawing::Point(83, 471);
			this->button271->Name = L"button271";
			this->button271->Size = System::Drawing::Size(120, 75);
			this->button271->TabIndex = 34;
			this->button271->UseVisualStyleBackColor = true;
			this->button271->Click += gcnew System::EventHandler(this, &MyForm::button271_Click);
			// 
			// button272
			// 
			this->button272->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button272.BackgroundImage")));
			this->button272->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button272->Location = System::Drawing::Point(515, 338);
			this->button272->Name = L"button272";
			this->button272->Size = System::Drawing::Size(120, 75);
			this->button272->TabIndex = 33;
			this->button272->UseVisualStyleBackColor = true;
			this->button272->Click += gcnew System::EventHandler(this, &MyForm::button272_Click);
			// 
			// button273
			// 
			this->button273->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button273.BackgroundImage")));
			this->button273->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button273->Location = System::Drawing::Point(306, 338);
			this->button273->Name = L"button273";
			this->button273->Size = System::Drawing::Size(120, 75);
			this->button273->TabIndex = 32;
			this->button273->UseVisualStyleBackColor = true;
			this->button273->Click += gcnew System::EventHandler(this, &MyForm::button273_Click);
			// 
			// button274
			// 
			this->button274->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button274.BackgroundImage")));
			this->button274->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button274->Location = System::Drawing::Point(83, 338);
			this->button274->Name = L"button274";
			this->button274->Size = System::Drawing::Size(120, 75);
			this->button274->TabIndex = 31;
			this->button274->UseVisualStyleBackColor = true;
			this->button274->Click += gcnew System::EventHandler(this, &MyForm::button274_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.BackgroundImage")));
			this->pictureBox40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox40->Location = System::Drawing::Point(329, 57);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(296, 247);
			this->pictureBox40->TabIndex = 30;
			this->pictureBox40->TabStop = false;
			// 
			// tabPage43
			// 
			this->tabPage43->Controls->Add(this->button275);
			this->tabPage43->Controls->Add(this->button276);
			this->tabPage43->Controls->Add(this->button277);
			this->tabPage43->Controls->Add(this->button278);
			this->tabPage43->Controls->Add(this->button279);
			this->tabPage43->Controls->Add(this->button280);
			this->tabPage43->Controls->Add(this->button281);
			this->tabPage43->Controls->Add(this->button282);
			this->tabPage43->Controls->Add(this->pictureBox41);
			this->tabPage43->Location = System::Drawing::Point(4, 22);
			this->tabPage43->Name = L"tabPage43";
			this->tabPage43->Size = System::Drawing::Size(932, 624);
			this->tabPage43->TabIndex = 42;
			this->tabPage43->Text = L"tabPage43";
			this->tabPage43->UseVisualStyleBackColor = true;
			// 
			// button275
			// 
			this->button275->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button275.BackgroundImage")));
			this->button275->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button275->Location = System::Drawing::Point(731, 471);
			this->button275->Name = L"button275";
			this->button275->Size = System::Drawing::Size(120, 75);
			this->button275->TabIndex = 38;
			this->button275->UseVisualStyleBackColor = true;
			this->button275->Click += gcnew System::EventHandler(this, &MyForm::button275_Click);
			// 
			// button276
			// 
			this->button276->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button276.BackgroundImage")));
			this->button276->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button276->Location = System::Drawing::Point(731, 338);
			this->button276->Name = L"button276";
			this->button276->Size = System::Drawing::Size(120, 75);
			this->button276->TabIndex = 37;
			this->button276->UseVisualStyleBackColor = true;
			this->button276->Click += gcnew System::EventHandler(this, &MyForm::button276_Click);
			// 
			// button277
			// 
			this->button277->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button277.BackgroundImage")));
			this->button277->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button277->Location = System::Drawing::Point(516, 471);
			this->button277->Name = L"button277";
			this->button277->Size = System::Drawing::Size(120, 75);
			this->button277->TabIndex = 36;
			this->button277->UseVisualStyleBackColor = true;
			this->button277->Click += gcnew System::EventHandler(this, &MyForm::button277_Click);
			// 
			// button278
			// 
			this->button278->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button278.BackgroundImage")));
			this->button278->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button278->Location = System::Drawing::Point(307, 471);
			this->button278->Name = L"button278";
			this->button278->Size = System::Drawing::Size(120, 75);
			this->button278->TabIndex = 35;
			this->button278->UseVisualStyleBackColor = true;
			this->button278->Click += gcnew System::EventHandler(this, &MyForm::button278_Click);
			// 
			// button279
			// 
			this->button279->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button279.BackgroundImage")));
			this->button279->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button279->Location = System::Drawing::Point(84, 471);
			this->button279->Name = L"button279";
			this->button279->Size = System::Drawing::Size(120, 75);
			this->button279->TabIndex = 34;
			this->button279->UseVisualStyleBackColor = true;
			this->button279->Click += gcnew System::EventHandler(this, &MyForm::button279_Click);
			// 
			// button280
			// 
			this->button280->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button280.BackgroundImage")));
			this->button280->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button280->Location = System::Drawing::Point(516, 338);
			this->button280->Name = L"button280";
			this->button280->Size = System::Drawing::Size(120, 75);
			this->button280->TabIndex = 33;
			this->button280->UseVisualStyleBackColor = true;
			this->button280->Click += gcnew System::EventHandler(this, &MyForm::button280_Click);
			// 
			// button281
			// 
			this->button281->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button281.BackgroundImage")));
			this->button281->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button281->Location = System::Drawing::Point(307, 338);
			this->button281->Name = L"button281";
			this->button281->Size = System::Drawing::Size(120, 75);
			this->button281->TabIndex = 32;
			this->button281->UseVisualStyleBackColor = true;
			this->button281->Click += gcnew System::EventHandler(this, &MyForm::button281_Click);
			// 
			// button282
			// 
			this->button282->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button282.BackgroundImage")));
			this->button282->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button282->Location = System::Drawing::Point(84, 338);
			this->button282->Name = L"button282";
			this->button282->Size = System::Drawing::Size(120, 75);
			this->button282->TabIndex = 31;
			this->button282->UseVisualStyleBackColor = true;
			this->button282->Click += gcnew System::EventHandler(this, &MyForm::button282_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.BackgroundImage")));
			this->pictureBox41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox41->Location = System::Drawing::Point(330, 57);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(296, 247);
			this->pictureBox41->TabIndex = 30;
			this->pictureBox41->TabStop = false;
			// 
			// tabPage44
			// 
			this->tabPage44->Controls->Add(this->button283);
			this->tabPage44->Controls->Add(this->button284);
			this->tabPage44->Controls->Add(this->button285);
			this->tabPage44->Controls->Add(this->button286);
			this->tabPage44->Controls->Add(this->button287);
			this->tabPage44->Controls->Add(this->button288);
			this->tabPage44->Controls->Add(this->button289);
			this->tabPage44->Controls->Add(this->button290);
			this->tabPage44->Controls->Add(this->pictureBox42);
			this->tabPage44->Location = System::Drawing::Point(4, 22);
			this->tabPage44->Name = L"tabPage44";
			this->tabPage44->Size = System::Drawing::Size(932, 624);
			this->tabPage44->TabIndex = 43;
			this->tabPage44->Text = L"tabPage44";
			this->tabPage44->UseVisualStyleBackColor = true;
			// 
			// button283
			// 
			this->button283->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button283.BackgroundImage")));
			this->button283->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button283->Location = System::Drawing::Point(729, 471);
			this->button283->Name = L"button283";
			this->button283->Size = System::Drawing::Size(120, 75);
			this->button283->TabIndex = 38;
			this->button283->UseVisualStyleBackColor = true;
			this->button283->Click += gcnew System::EventHandler(this, &MyForm::button283_Click);
			// 
			// button284
			// 
			this->button284->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button284.BackgroundImage")));
			this->button284->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button284->Location = System::Drawing::Point(729, 338);
			this->button284->Name = L"button284";
			this->button284->Size = System::Drawing::Size(120, 75);
			this->button284->TabIndex = 37;
			this->button284->UseVisualStyleBackColor = true;
			this->button284->Click += gcnew System::EventHandler(this, &MyForm::button284_Click);
			// 
			// button285
			// 
			this->button285->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button285.BackgroundImage")));
			this->button285->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button285->Location = System::Drawing::Point(514, 471);
			this->button285->Name = L"button285";
			this->button285->Size = System::Drawing::Size(120, 75);
			this->button285->TabIndex = 36;
			this->button285->UseVisualStyleBackColor = true;
			this->button285->Click += gcnew System::EventHandler(this, &MyForm::button285_Click);
			// 
			// button286
			// 
			this->button286->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button286.BackgroundImage")));
			this->button286->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button286->Location = System::Drawing::Point(305, 471);
			this->button286->Name = L"button286";
			this->button286->Size = System::Drawing::Size(120, 75);
			this->button286->TabIndex = 35;
			this->button286->UseVisualStyleBackColor = true;
			this->button286->Click += gcnew System::EventHandler(this, &MyForm::button286_Click);
			// 
			// button287
			// 
			this->button287->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button287.BackgroundImage")));
			this->button287->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button287->Location = System::Drawing::Point(82, 471);
			this->button287->Name = L"button287";
			this->button287->Size = System::Drawing::Size(120, 75);
			this->button287->TabIndex = 34;
			this->button287->UseVisualStyleBackColor = true;
			this->button287->Click += gcnew System::EventHandler(this, &MyForm::button287_Click);
			// 
			// button288
			// 
			this->button288->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button288.BackgroundImage")));
			this->button288->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button288->Location = System::Drawing::Point(514, 338);
			this->button288->Name = L"button288";
			this->button288->Size = System::Drawing::Size(120, 75);
			this->button288->TabIndex = 33;
			this->button288->UseVisualStyleBackColor = true;
			this->button288->Click += gcnew System::EventHandler(this, &MyForm::button288_Click);
			// 
			// button289
			// 
			this->button289->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button289.BackgroundImage")));
			this->button289->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button289->Location = System::Drawing::Point(305, 338);
			this->button289->Name = L"button289";
			this->button289->Size = System::Drawing::Size(120, 75);
			this->button289->TabIndex = 32;
			this->button289->UseVisualStyleBackColor = true;
			this->button289->Click += gcnew System::EventHandler(this, &MyForm::button289_Click);
			// 
			// button290
			// 
			this->button290->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button290.BackgroundImage")));
			this->button290->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button290->Location = System::Drawing::Point(82, 338);
			this->button290->Name = L"button290";
			this->button290->Size = System::Drawing::Size(120, 75);
			this->button290->TabIndex = 31;
			this->button290->UseVisualStyleBackColor = true;
			this->button290->Click += gcnew System::EventHandler(this, &MyForm::button290_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.BackgroundImage")));
			this->pictureBox42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox42->Location = System::Drawing::Point(328, 57);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(296, 247);
			this->pictureBox42->TabIndex = 30;
			this->pictureBox42->TabStop = false;
			// 
			// tabPage45
			// 
			this->tabPage45->Controls->Add(this->button291);
			this->tabPage45->Controls->Add(this->button292);
			this->tabPage45->Controls->Add(this->button293);
			this->tabPage45->Controls->Add(this->button294);
			this->tabPage45->Controls->Add(this->button295);
			this->tabPage45->Controls->Add(this->button296);
			this->tabPage45->Controls->Add(this->button297);
			this->tabPage45->Controls->Add(this->button298);
			this->tabPage45->Controls->Add(this->pictureBox43);
			this->tabPage45->Location = System::Drawing::Point(4, 22);
			this->tabPage45->Name = L"tabPage45";
			this->tabPage45->Size = System::Drawing::Size(932, 624);
			this->tabPage45->TabIndex = 44;
			this->tabPage45->Text = L"tabPage45";
			this->tabPage45->UseVisualStyleBackColor = true;
			// 
			// button291
			// 
			this->button291->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button291.BackgroundImage")));
			this->button291->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button291->Location = System::Drawing::Point(731, 471);
			this->button291->Name = L"button291";
			this->button291->Size = System::Drawing::Size(120, 75);
			this->button291->TabIndex = 38;
			this->button291->UseVisualStyleBackColor = true;
			this->button291->Click += gcnew System::EventHandler(this, &MyForm::button291_Click);
			// 
			// button292
			// 
			this->button292->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button292.BackgroundImage")));
			this->button292->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button292->Location = System::Drawing::Point(731, 338);
			this->button292->Name = L"button292";
			this->button292->Size = System::Drawing::Size(120, 75);
			this->button292->TabIndex = 37;
			this->button292->UseVisualStyleBackColor = true;
			this->button292->Click += gcnew System::EventHandler(this, &MyForm::button292_Click);
			// 
			// button293
			// 
			this->button293->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button293.BackgroundImage")));
			this->button293->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button293->Location = System::Drawing::Point(516, 471);
			this->button293->Name = L"button293";
			this->button293->Size = System::Drawing::Size(120, 75);
			this->button293->TabIndex = 36;
			this->button293->UseVisualStyleBackColor = true;
			this->button293->Click += gcnew System::EventHandler(this, &MyForm::button293_Click);
			// 
			// button294
			// 
			this->button294->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button294.BackgroundImage")));
			this->button294->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button294->Location = System::Drawing::Point(307, 471);
			this->button294->Name = L"button294";
			this->button294->Size = System::Drawing::Size(120, 75);
			this->button294->TabIndex = 35;
			this->button294->UseVisualStyleBackColor = true;
			this->button294->Click += gcnew System::EventHandler(this, &MyForm::button294_Click);
			// 
			// button295
			// 
			this->button295->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button295.BackgroundImage")));
			this->button295->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button295->Location = System::Drawing::Point(84, 471);
			this->button295->Name = L"button295";
			this->button295->Size = System::Drawing::Size(120, 75);
			this->button295->TabIndex = 34;
			this->button295->UseVisualStyleBackColor = true;
			this->button295->Click += gcnew System::EventHandler(this, &MyForm::button295_Click);
			// 
			// button296
			// 
			this->button296->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button296.BackgroundImage")));
			this->button296->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button296->Location = System::Drawing::Point(516, 338);
			this->button296->Name = L"button296";
			this->button296->Size = System::Drawing::Size(120, 75);
			this->button296->TabIndex = 33;
			this->button296->UseVisualStyleBackColor = true;
			this->button296->Click += gcnew System::EventHandler(this, &MyForm::button296_Click);
			// 
			// button297
			// 
			this->button297->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button297.BackgroundImage")));
			this->button297->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button297->Location = System::Drawing::Point(307, 338);
			this->button297->Name = L"button297";
			this->button297->Size = System::Drawing::Size(120, 75);
			this->button297->TabIndex = 32;
			this->button297->UseVisualStyleBackColor = true;
			this->button297->Click += gcnew System::EventHandler(this, &MyForm::button297_Click);
			// 
			// button298
			// 
			this->button298->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button298.BackgroundImage")));
			this->button298->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button298->Location = System::Drawing::Point(84, 338);
			this->button298->Name = L"button298";
			this->button298->Size = System::Drawing::Size(120, 75);
			this->button298->TabIndex = 31;
			this->button298->UseVisualStyleBackColor = true;
			this->button298->Click += gcnew System::EventHandler(this, &MyForm::button298_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.BackgroundImage")));
			this->pictureBox43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox43->Location = System::Drawing::Point(330, 57);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(296, 247);
			this->pictureBox43->TabIndex = 30;
			this->pictureBox43->TabStop = false;
			// 
			// tabPage46
			// 
			this->tabPage46->Controls->Add(this->button299);
			this->tabPage46->Controls->Add(this->button300);
			this->tabPage46->Controls->Add(this->button301);
			this->tabPage46->Controls->Add(this->button302);
			this->tabPage46->Controls->Add(this->button303);
			this->tabPage46->Controls->Add(this->button304);
			this->tabPage46->Controls->Add(this->button305);
			this->tabPage46->Controls->Add(this->button306);
			this->tabPage46->Controls->Add(this->pictureBox44);
			this->tabPage46->Location = System::Drawing::Point(4, 22);
			this->tabPage46->Name = L"tabPage46";
			this->tabPage46->Size = System::Drawing::Size(932, 624);
			this->tabPage46->TabIndex = 45;
			this->tabPage46->Text = L"tabPage46";
			this->tabPage46->UseVisualStyleBackColor = true;
			// 
			// button299
			// 
			this->button299->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button299.BackgroundImage")));
			this->button299->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button299->Location = System::Drawing::Point(731, 471);
			this->button299->Name = L"button299";
			this->button299->Size = System::Drawing::Size(120, 75);
			this->button299->TabIndex = 38;
			this->button299->UseVisualStyleBackColor = true;
			this->button299->Click += gcnew System::EventHandler(this, &MyForm::button299_Click);
			// 
			// button300
			// 
			this->button300->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button300.BackgroundImage")));
			this->button300->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button300->Location = System::Drawing::Point(731, 338);
			this->button300->Name = L"button300";
			this->button300->Size = System::Drawing::Size(120, 75);
			this->button300->TabIndex = 37;
			this->button300->UseVisualStyleBackColor = true;
			this->button300->Click += gcnew System::EventHandler(this, &MyForm::button300_Click);
			// 
			// button301
			// 
			this->button301->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button301.BackgroundImage")));
			this->button301->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button301->Location = System::Drawing::Point(516, 471);
			this->button301->Name = L"button301";
			this->button301->Size = System::Drawing::Size(120, 75);
			this->button301->TabIndex = 36;
			this->button301->UseVisualStyleBackColor = true;
			this->button301->Click += gcnew System::EventHandler(this, &MyForm::button301_Click);
			// 
			// button302
			// 
			this->button302->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button302.BackgroundImage")));
			this->button302->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button302->Location = System::Drawing::Point(307, 471);
			this->button302->Name = L"button302";
			this->button302->Size = System::Drawing::Size(120, 75);
			this->button302->TabIndex = 35;
			this->button302->UseVisualStyleBackColor = true;
			this->button302->Click += gcnew System::EventHandler(this, &MyForm::button302_Click);
			// 
			// button303
			// 
			this->button303->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button303.BackgroundImage")));
			this->button303->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button303->Location = System::Drawing::Point(84, 471);
			this->button303->Name = L"button303";
			this->button303->Size = System::Drawing::Size(120, 75);
			this->button303->TabIndex = 34;
			this->button303->UseVisualStyleBackColor = true;
			this->button303->Click += gcnew System::EventHandler(this, &MyForm::button303_Click);
			// 
			// button304
			// 
			this->button304->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button304.BackgroundImage")));
			this->button304->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button304->Location = System::Drawing::Point(516, 338);
			this->button304->Name = L"button304";
			this->button304->Size = System::Drawing::Size(120, 75);
			this->button304->TabIndex = 33;
			this->button304->UseVisualStyleBackColor = true;
			this->button304->Click += gcnew System::EventHandler(this, &MyForm::button304_Click);
			// 
			// button305
			// 
			this->button305->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button305.BackgroundImage")));
			this->button305->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button305->Location = System::Drawing::Point(307, 338);
			this->button305->Name = L"button305";
			this->button305->Size = System::Drawing::Size(120, 75);
			this->button305->TabIndex = 32;
			this->button305->UseVisualStyleBackColor = true;
			this->button305->Click += gcnew System::EventHandler(this, &MyForm::button305_Click);
			// 
			// button306
			// 
			this->button306->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button306.BackgroundImage")));
			this->button306->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button306->Location = System::Drawing::Point(84, 338);
			this->button306->Name = L"button306";
			this->button306->Size = System::Drawing::Size(120, 75);
			this->button306->TabIndex = 31;
			this->button306->UseVisualStyleBackColor = true;
			this->button306->Click += gcnew System::EventHandler(this, &MyForm::button306_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.BackgroundImage")));
			this->pictureBox44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox44->Location = System::Drawing::Point(330, 57);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(296, 247);
			this->pictureBox44->TabIndex = 30;
			this->pictureBox44->TabStop = false;
			// 
			// tabPage47
			// 
			this->tabPage47->Controls->Add(this->button307);
			this->tabPage47->Controls->Add(this->button308);
			this->tabPage47->Controls->Add(this->button309);
			this->tabPage47->Controls->Add(this->button310);
			this->tabPage47->Controls->Add(this->button311);
			this->tabPage47->Controls->Add(this->button312);
			this->tabPage47->Controls->Add(this->button313);
			this->tabPage47->Controls->Add(this->button314);
			this->tabPage47->Controls->Add(this->pictureBox45);
			this->tabPage47->Location = System::Drawing::Point(4, 22);
			this->tabPage47->Name = L"tabPage47";
			this->tabPage47->Size = System::Drawing::Size(932, 624);
			this->tabPage47->TabIndex = 46;
			this->tabPage47->Text = L"tabPage47";
			this->tabPage47->UseVisualStyleBackColor = true;
			// 
			// button307
			// 
			this->button307->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button307.BackgroundImage")));
			this->button307->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button307->Location = System::Drawing::Point(732, 471);
			this->button307->Name = L"button307";
			this->button307->Size = System::Drawing::Size(120, 75);
			this->button307->TabIndex = 38;
			this->button307->UseVisualStyleBackColor = true;
			this->button307->Click += gcnew System::EventHandler(this, &MyForm::button307_Click);
			// 
			// button308
			// 
			this->button308->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button308.BackgroundImage")));
			this->button308->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button308->Location = System::Drawing::Point(732, 338);
			this->button308->Name = L"button308";
			this->button308->Size = System::Drawing::Size(120, 75);
			this->button308->TabIndex = 37;
			this->button308->UseVisualStyleBackColor = true;
			this->button308->Click += gcnew System::EventHandler(this, &MyForm::button308_Click);
			// 
			// button309
			// 
			this->button309->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button309.BackgroundImage")));
			this->button309->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button309->Location = System::Drawing::Point(517, 471);
			this->button309->Name = L"button309";
			this->button309->Size = System::Drawing::Size(120, 75);
			this->button309->TabIndex = 36;
			this->button309->UseVisualStyleBackColor = true;
			this->button309->Click += gcnew System::EventHandler(this, &MyForm::button309_Click);
			// 
			// button310
			// 
			this->button310->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button310.BackgroundImage")));
			this->button310->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button310->Location = System::Drawing::Point(308, 471);
			this->button310->Name = L"button310";
			this->button310->Size = System::Drawing::Size(120, 75);
			this->button310->TabIndex = 35;
			this->button310->UseVisualStyleBackColor = true;
			this->button310->Click += gcnew System::EventHandler(this, &MyForm::button310_Click);
			// 
			// button311
			// 
			this->button311->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button311.BackgroundImage")));
			this->button311->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button311->Location = System::Drawing::Point(85, 471);
			this->button311->Name = L"button311";
			this->button311->Size = System::Drawing::Size(120, 75);
			this->button311->TabIndex = 34;
			this->button311->UseVisualStyleBackColor = true;
			this->button311->Click += gcnew System::EventHandler(this, &MyForm::button311_Click);
			// 
			// button312
			// 
			this->button312->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button312.BackgroundImage")));
			this->button312->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button312->Location = System::Drawing::Point(517, 338);
			this->button312->Name = L"button312";
			this->button312->Size = System::Drawing::Size(120, 75);
			this->button312->TabIndex = 33;
			this->button312->UseVisualStyleBackColor = true;
			this->button312->Click += gcnew System::EventHandler(this, &MyForm::button312_Click);
			// 
			// button313
			// 
			this->button313->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button313.BackgroundImage")));
			this->button313->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button313->Location = System::Drawing::Point(308, 338);
			this->button313->Name = L"button313";
			this->button313->Size = System::Drawing::Size(120, 75);
			this->button313->TabIndex = 32;
			this->button313->UseVisualStyleBackColor = true;
			this->button313->Click += gcnew System::EventHandler(this, &MyForm::button313_Click);
			// 
			// button314
			// 
			this->button314->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button314.BackgroundImage")));
			this->button314->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button314->Location = System::Drawing::Point(85, 338);
			this->button314->Name = L"button314";
			this->button314->Size = System::Drawing::Size(120, 75);
			this->button314->TabIndex = 31;
			this->button314->UseVisualStyleBackColor = true;
			this->button314->Click += gcnew System::EventHandler(this, &MyForm::button314_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.BackgroundImage")));
			this->pictureBox45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox45->Location = System::Drawing::Point(331, 57);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(296, 247);
			this->pictureBox45->TabIndex = 30;
			this->pictureBox45->TabStop = false;
			// 
			// tabPage48
			// 
			this->tabPage48->Controls->Add(this->button315);
			this->tabPage48->Controls->Add(this->button316);
			this->tabPage48->Controls->Add(this->button317);
			this->tabPage48->Controls->Add(this->button318);
			this->tabPage48->Controls->Add(this->button319);
			this->tabPage48->Controls->Add(this->button320);
			this->tabPage48->Controls->Add(this->button321);
			this->tabPage48->Controls->Add(this->button322);
			this->tabPage48->Controls->Add(this->pictureBox46);
			this->tabPage48->Location = System::Drawing::Point(4, 22);
			this->tabPage48->Name = L"tabPage48";
			this->tabPage48->Size = System::Drawing::Size(932, 624);
			this->tabPage48->TabIndex = 47;
			this->tabPage48->Text = L"tabPage48";
			this->tabPage48->UseVisualStyleBackColor = true;
			// 
			// button315
			// 
			this->button315->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button315.BackgroundImage")));
			this->button315->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button315->Location = System::Drawing::Point(733, 471);
			this->button315->Name = L"button315";
			this->button315->Size = System::Drawing::Size(120, 75);
			this->button315->TabIndex = 38;
			this->button315->UseVisualStyleBackColor = true;
			this->button315->Click += gcnew System::EventHandler(this, &MyForm::button315_Click);
			// 
			// button316
			// 
			this->button316->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button316.BackgroundImage")));
			this->button316->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button316->Location = System::Drawing::Point(733, 338);
			this->button316->Name = L"button316";
			this->button316->Size = System::Drawing::Size(120, 75);
			this->button316->TabIndex = 37;
			this->button316->UseVisualStyleBackColor = true;
			this->button316->Click += gcnew System::EventHandler(this, &MyForm::button316_Click);
			// 
			// button317
			// 
			this->button317->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button317.BackgroundImage")));
			this->button317->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button317->Location = System::Drawing::Point(518, 471);
			this->button317->Name = L"button317";
			this->button317->Size = System::Drawing::Size(120, 75);
			this->button317->TabIndex = 36;
			this->button317->UseVisualStyleBackColor = true;
			this->button317->Click += gcnew System::EventHandler(this, &MyForm::button317_Click);
			// 
			// button318
			// 
			this->button318->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button318.BackgroundImage")));
			this->button318->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button318->Location = System::Drawing::Point(309, 471);
			this->button318->Name = L"button318";
			this->button318->Size = System::Drawing::Size(120, 75);
			this->button318->TabIndex = 35;
			this->button318->UseVisualStyleBackColor = true;
			this->button318->Click += gcnew System::EventHandler(this, &MyForm::button318_Click);
			// 
			// button319
			// 
			this->button319->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button319.BackgroundImage")));
			this->button319->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button319->Location = System::Drawing::Point(86, 471);
			this->button319->Name = L"button319";
			this->button319->Size = System::Drawing::Size(120, 75);
			this->button319->TabIndex = 34;
			this->button319->UseVisualStyleBackColor = true;
			this->button319->Click += gcnew System::EventHandler(this, &MyForm::button319_Click);
			// 
			// button320
			// 
			this->button320->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button320.BackgroundImage")));
			this->button320->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button320->Location = System::Drawing::Point(518, 338);
			this->button320->Name = L"button320";
			this->button320->Size = System::Drawing::Size(120, 75);
			this->button320->TabIndex = 33;
			this->button320->UseVisualStyleBackColor = true;
			this->button320->Click += gcnew System::EventHandler(this, &MyForm::button320_Click);
			// 
			// button321
			// 
			this->button321->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button321.BackgroundImage")));
			this->button321->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button321->Location = System::Drawing::Point(309, 338);
			this->button321->Name = L"button321";
			this->button321->Size = System::Drawing::Size(120, 75);
			this->button321->TabIndex = 32;
			this->button321->UseVisualStyleBackColor = true;
			this->button321->Click += gcnew System::EventHandler(this, &MyForm::button321_Click);
			// 
			// button322
			// 
			this->button322->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button322.BackgroundImage")));
			this->button322->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button322->Location = System::Drawing::Point(86, 338);
			this->button322->Name = L"button322";
			this->button322->Size = System::Drawing::Size(120, 75);
			this->button322->TabIndex = 31;
			this->button322->UseVisualStyleBackColor = true;
			this->button322->Click += gcnew System::EventHandler(this, &MyForm::button322_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.BackgroundImage")));
			this->pictureBox46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox46->Location = System::Drawing::Point(332, 57);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(296, 247);
			this->pictureBox46->TabIndex = 30;
			this->pictureBox46->TabStop = false;
			// 
			// tabPage49
			// 
			this->tabPage49->Controls->Add(this->button323);
			this->tabPage49->Controls->Add(this->button324);
			this->tabPage49->Controls->Add(this->button325);
			this->tabPage49->Controls->Add(this->button326);
			this->tabPage49->Controls->Add(this->button327);
			this->tabPage49->Controls->Add(this->button328);
			this->tabPage49->Controls->Add(this->button329);
			this->tabPage49->Controls->Add(this->button330);
			this->tabPage49->Controls->Add(this->pictureBox47);
			this->tabPage49->Location = System::Drawing::Point(4, 22);
			this->tabPage49->Name = L"tabPage49";
			this->tabPage49->Size = System::Drawing::Size(932, 624);
			this->tabPage49->TabIndex = 48;
			this->tabPage49->Text = L"tabPage49";
			this->tabPage49->UseVisualStyleBackColor = true;
			// 
			// button323
			// 
			this->button323->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button323.BackgroundImage")));
			this->button323->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button323->Location = System::Drawing::Point(730, 471);
			this->button323->Name = L"button323";
			this->button323->Size = System::Drawing::Size(120, 75);
			this->button323->TabIndex = 38;
			this->button323->UseVisualStyleBackColor = true;
			this->button323->Click += gcnew System::EventHandler(this, &MyForm::button323_Click);
			// 
			// button324
			// 
			this->button324->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button324.BackgroundImage")));
			this->button324->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button324->Location = System::Drawing::Point(730, 338);
			this->button324->Name = L"button324";
			this->button324->Size = System::Drawing::Size(120, 75);
			this->button324->TabIndex = 37;
			this->button324->UseVisualStyleBackColor = true;
			this->button324->Click += gcnew System::EventHandler(this, &MyForm::button324_Click);
			// 
			// button325
			// 
			this->button325->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button325.BackgroundImage")));
			this->button325->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button325->Location = System::Drawing::Point(515, 471);
			this->button325->Name = L"button325";
			this->button325->Size = System::Drawing::Size(120, 75);
			this->button325->TabIndex = 36;
			this->button325->UseVisualStyleBackColor = true;
			this->button325->Click += gcnew System::EventHandler(this, &MyForm::button325_Click);
			// 
			// button326
			// 
			this->button326->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button326.BackgroundImage")));
			this->button326->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button326->Location = System::Drawing::Point(306, 471);
			this->button326->Name = L"button326";
			this->button326->Size = System::Drawing::Size(120, 75);
			this->button326->TabIndex = 35;
			this->button326->UseVisualStyleBackColor = true;
			this->button326->Click += gcnew System::EventHandler(this, &MyForm::button326_Click);
			// 
			// button327
			// 
			this->button327->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button327.BackgroundImage")));
			this->button327->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button327->Location = System::Drawing::Point(83, 471);
			this->button327->Name = L"button327";
			this->button327->Size = System::Drawing::Size(120, 75);
			this->button327->TabIndex = 34;
			this->button327->UseVisualStyleBackColor = true;
			this->button327->Click += gcnew System::EventHandler(this, &MyForm::button327_Click);
			// 
			// button328
			// 
			this->button328->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button328.BackgroundImage")));
			this->button328->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button328->Location = System::Drawing::Point(515, 338);
			this->button328->Name = L"button328";
			this->button328->Size = System::Drawing::Size(120, 75);
			this->button328->TabIndex = 33;
			this->button328->UseVisualStyleBackColor = true;
			this->button328->Click += gcnew System::EventHandler(this, &MyForm::button328_Click);
			// 
			// button329
			// 
			this->button329->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button329.BackgroundImage")));
			this->button329->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button329->Location = System::Drawing::Point(306, 338);
			this->button329->Name = L"button329";
			this->button329->Size = System::Drawing::Size(120, 75);
			this->button329->TabIndex = 32;
			this->button329->UseVisualStyleBackColor = true;
			this->button329->Click += gcnew System::EventHandler(this, &MyForm::button329_Click);
			// 
			// button330
			// 
			this->button330->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button330.BackgroundImage")));
			this->button330->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button330->Location = System::Drawing::Point(83, 338);
			this->button330->Name = L"button330";
			this->button330->Size = System::Drawing::Size(120, 75);
			this->button330->TabIndex = 31;
			this->button330->UseVisualStyleBackColor = true;
			this->button330->Click += gcnew System::EventHandler(this, &MyForm::button330_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.BackgroundImage")));
			this->pictureBox47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox47->Location = System::Drawing::Point(329, 57);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(296, 247);
			this->pictureBox47->TabIndex = 30;
			this->pictureBox47->TabStop = false;
			// 
			// tabPage50
			// 
			this->tabPage50->Controls->Add(this->button331);
			this->tabPage50->Controls->Add(this->button332);
			this->tabPage50->Controls->Add(this->button333);
			this->tabPage50->Controls->Add(this->button334);
			this->tabPage50->Controls->Add(this->button335);
			this->tabPage50->Controls->Add(this->button336);
			this->tabPage50->Controls->Add(this->button337);
			this->tabPage50->Controls->Add(this->button338);
			this->tabPage50->Controls->Add(this->pictureBox48);
			this->tabPage50->Location = System::Drawing::Point(4, 22);
			this->tabPage50->Name = L"tabPage50";
			this->tabPage50->Size = System::Drawing::Size(932, 624);
			this->tabPage50->TabIndex = 49;
			this->tabPage50->Text = L"tabPage50";
			this->tabPage50->UseVisualStyleBackColor = true;
			// 
			// button331
			// 
			this->button331->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button331.BackgroundImage")));
			this->button331->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button331->Location = System::Drawing::Point(731, 471);
			this->button331->Name = L"button331";
			this->button331->Size = System::Drawing::Size(120, 75);
			this->button331->TabIndex = 38;
			this->button331->UseVisualStyleBackColor = true;
			this->button331->Click += gcnew System::EventHandler(this, &MyForm::button331_Click);
			// 
			// button332
			// 
			this->button332->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button332.BackgroundImage")));
			this->button332->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button332->Location = System::Drawing::Point(731, 338);
			this->button332->Name = L"button332";
			this->button332->Size = System::Drawing::Size(120, 75);
			this->button332->TabIndex = 37;
			this->button332->UseVisualStyleBackColor = true;
			this->button332->Click += gcnew System::EventHandler(this, &MyForm::button332_Click);
			// 
			// button333
			// 
			this->button333->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button333.BackgroundImage")));
			this->button333->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button333->Location = System::Drawing::Point(516, 471);
			this->button333->Name = L"button333";
			this->button333->Size = System::Drawing::Size(120, 75);
			this->button333->TabIndex = 36;
			this->button333->UseVisualStyleBackColor = true;
			this->button333->Click += gcnew System::EventHandler(this, &MyForm::button333_Click);
			// 
			// button334
			// 
			this->button334->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button334.BackgroundImage")));
			this->button334->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button334->Location = System::Drawing::Point(307, 471);
			this->button334->Name = L"button334";
			this->button334->Size = System::Drawing::Size(120, 75);
			this->button334->TabIndex = 35;
			this->button334->UseVisualStyleBackColor = true;
			this->button334->Click += gcnew System::EventHandler(this, &MyForm::button334_Click);
			// 
			// button335
			// 
			this->button335->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button335.BackgroundImage")));
			this->button335->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button335->Location = System::Drawing::Point(84, 471);
			this->button335->Name = L"button335";
			this->button335->Size = System::Drawing::Size(120, 75);
			this->button335->TabIndex = 34;
			this->button335->UseVisualStyleBackColor = true;
			this->button335->Click += gcnew System::EventHandler(this, &MyForm::button335_Click);
			// 
			// button336
			// 
			this->button336->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button336.BackgroundImage")));
			this->button336->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button336->Location = System::Drawing::Point(516, 338);
			this->button336->Name = L"button336";
			this->button336->Size = System::Drawing::Size(120, 75);
			this->button336->TabIndex = 33;
			this->button336->UseVisualStyleBackColor = true;
			this->button336->Click += gcnew System::EventHandler(this, &MyForm::button336_Click);
			// 
			// button337
			// 
			this->button337->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button337.BackgroundImage")));
			this->button337->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button337->Location = System::Drawing::Point(307, 338);
			this->button337->Name = L"button337";
			this->button337->Size = System::Drawing::Size(120, 75);
			this->button337->TabIndex = 32;
			this->button337->UseVisualStyleBackColor = true;
			this->button337->Click += gcnew System::EventHandler(this, &MyForm::button337_Click);
			// 
			// button338
			// 
			this->button338->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button338.BackgroundImage")));
			this->button338->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button338->Location = System::Drawing::Point(84, 338);
			this->button338->Name = L"button338";
			this->button338->Size = System::Drawing::Size(120, 75);
			this->button338->TabIndex = 31;
			this->button338->UseVisualStyleBackColor = true;
			this->button338->Click += gcnew System::EventHandler(this, &MyForm::button338_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.BackgroundImage")));
			this->pictureBox48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox48->Location = System::Drawing::Point(330, 57);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(296, 247);
			this->pictureBox48->TabIndex = 30;
			this->pictureBox48->TabStop = false;
			// 
			// tabPage51
			// 
			this->tabPage51->Controls->Add(this->button339);
			this->tabPage51->Controls->Add(this->button340);
			this->tabPage51->Controls->Add(this->button341);
			this->tabPage51->Controls->Add(this->button342);
			this->tabPage51->Controls->Add(this->button343);
			this->tabPage51->Controls->Add(this->button344);
			this->tabPage51->Controls->Add(this->button345);
			this->tabPage51->Controls->Add(this->button346);
			this->tabPage51->Controls->Add(this->pictureBox49);
			this->tabPage51->Location = System::Drawing::Point(4, 22);
			this->tabPage51->Name = L"tabPage51";
			this->tabPage51->Size = System::Drawing::Size(932, 624);
			this->tabPage51->TabIndex = 50;
			this->tabPage51->Text = L"tabPage51";
			this->tabPage51->UseVisualStyleBackColor = true;
			// 
			// button339
			// 
			this->button339->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button339.BackgroundImage")));
			this->button339->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button339->Location = System::Drawing::Point(732, 471);
			this->button339->Name = L"button339";
			this->button339->Size = System::Drawing::Size(120, 75);
			this->button339->TabIndex = 38;
			this->button339->UseVisualStyleBackColor = true;
			this->button339->Click += gcnew System::EventHandler(this, &MyForm::button339_Click);
			// 
			// button340
			// 
			this->button340->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button340.BackgroundImage")));
			this->button340->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button340->Location = System::Drawing::Point(732, 338);
			this->button340->Name = L"button340";
			this->button340->Size = System::Drawing::Size(120, 75);
			this->button340->TabIndex = 37;
			this->button340->UseVisualStyleBackColor = true;
			this->button340->Click += gcnew System::EventHandler(this, &MyForm::button340_Click);
			// 
			// button341
			// 
			this->button341->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button341.BackgroundImage")));
			this->button341->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button341->Location = System::Drawing::Point(517, 471);
			this->button341->Name = L"button341";
			this->button341->Size = System::Drawing::Size(120, 75);
			this->button341->TabIndex = 36;
			this->button341->UseVisualStyleBackColor = true;
			this->button341->Click += gcnew System::EventHandler(this, &MyForm::button341_Click);
			// 
			// button342
			// 
			this->button342->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button342.BackgroundImage")));
			this->button342->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button342->Location = System::Drawing::Point(308, 471);
			this->button342->Name = L"button342";
			this->button342->Size = System::Drawing::Size(120, 75);
			this->button342->TabIndex = 35;
			this->button342->UseVisualStyleBackColor = true;
			this->button342->Click += gcnew System::EventHandler(this, &MyForm::button342_Click);
			// 
			// button343
			// 
			this->button343->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button343.BackgroundImage")));
			this->button343->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button343->Location = System::Drawing::Point(85, 471);
			this->button343->Name = L"button343";
			this->button343->Size = System::Drawing::Size(120, 75);
			this->button343->TabIndex = 34;
			this->button343->UseVisualStyleBackColor = true;
			this->button343->Click += gcnew System::EventHandler(this, &MyForm::button343_Click);
			// 
			// button344
			// 
			this->button344->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button344.BackgroundImage")));
			this->button344->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button344->Location = System::Drawing::Point(517, 338);
			this->button344->Name = L"button344";
			this->button344->Size = System::Drawing::Size(120, 70);
			this->button344->TabIndex = 33;
			this->button344->UseVisualStyleBackColor = true;
			this->button344->Click += gcnew System::EventHandler(this, &MyForm::button344_Click);
			// 
			// button345
			// 
			this->button345->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button345.BackgroundImage")));
			this->button345->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button345->Location = System::Drawing::Point(308, 338);
			this->button345->Name = L"button345";
			this->button345->Size = System::Drawing::Size(120, 75);
			this->button345->TabIndex = 32;
			this->button345->UseVisualStyleBackColor = true;
			this->button345->Click += gcnew System::EventHandler(this, &MyForm::button345_Click);
			// 
			// button346
			// 
			this->button346->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button346.BackgroundImage")));
			this->button346->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button346->Location = System::Drawing::Point(85, 338);
			this->button346->Name = L"button346";
			this->button346->Size = System::Drawing::Size(120, 75);
			this->button346->TabIndex = 31;
			this->button346->UseVisualStyleBackColor = true;
			this->button346->Click += gcnew System::EventHandler(this, &MyForm::button346_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.BackgroundImage")));
			this->pictureBox49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox49->Location = System::Drawing::Point(331, 57);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(296, 247);
			this->pictureBox49->TabIndex = 30;
			this->pictureBox49->TabStop = false;
			// 
			// tabPage52
			// 
			this->tabPage52->Controls->Add(this->button347);
			this->tabPage52->Controls->Add(this->button348);
			this->tabPage52->Controls->Add(this->button349);
			this->tabPage52->Controls->Add(this->button350);
			this->tabPage52->Controls->Add(this->button351);
			this->tabPage52->Controls->Add(this->button352);
			this->tabPage52->Controls->Add(this->button353);
			this->tabPage52->Controls->Add(this->button354);
			this->tabPage52->Controls->Add(this->pictureBox50);
			this->tabPage52->Location = System::Drawing::Point(4, 22);
			this->tabPage52->Name = L"tabPage52";
			this->tabPage52->Size = System::Drawing::Size(932, 624);
			this->tabPage52->TabIndex = 51;
			this->tabPage52->Text = L"tabPage52";
			this->tabPage52->UseVisualStyleBackColor = true;
			// 
			// button347
			// 
			this->button347->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button347.BackgroundImage")));
			this->button347->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button347->Location = System::Drawing::Point(731, 471);
			this->button347->Name = L"button347";
			this->button347->Size = System::Drawing::Size(120, 75);
			this->button347->TabIndex = 38;
			this->button347->UseVisualStyleBackColor = true;
			this->button347->Click += gcnew System::EventHandler(this, &MyForm::button347_Click);
			// 
			// button348
			// 
			this->button348->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button348.BackgroundImage")));
			this->button348->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button348->Location = System::Drawing::Point(731, 338);
			this->button348->Name = L"button348";
			this->button348->Size = System::Drawing::Size(120, 75);
			this->button348->TabIndex = 37;
			this->button348->UseVisualStyleBackColor = true;
			this->button348->Click += gcnew System::EventHandler(this, &MyForm::button348_Click);
			// 
			// button349
			// 
			this->button349->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button349.BackgroundImage")));
			this->button349->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button349->Location = System::Drawing::Point(516, 471);
			this->button349->Name = L"button349";
			this->button349->Size = System::Drawing::Size(120, 75);
			this->button349->TabIndex = 36;
			this->button349->UseVisualStyleBackColor = true;
			this->button349->Click += gcnew System::EventHandler(this, &MyForm::button349_Click);
			// 
			// button350
			// 
			this->button350->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button350.BackgroundImage")));
			this->button350->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button350->Location = System::Drawing::Point(307, 471);
			this->button350->Name = L"button350";
			this->button350->Size = System::Drawing::Size(120, 75);
			this->button350->TabIndex = 35;
			this->button350->UseVisualStyleBackColor = true;
			this->button350->Click += gcnew System::EventHandler(this, &MyForm::button350_Click);
			// 
			// button351
			// 
			this->button351->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button351.BackgroundImage")));
			this->button351->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button351->Location = System::Drawing::Point(84, 471);
			this->button351->Name = L"button351";
			this->button351->Size = System::Drawing::Size(120, 75);
			this->button351->TabIndex = 34;
			this->button351->UseVisualStyleBackColor = true;
			this->button351->Click += gcnew System::EventHandler(this, &MyForm::button351_Click);
			// 
			// button352
			// 
			this->button352->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button352.BackgroundImage")));
			this->button352->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button352->Location = System::Drawing::Point(516, 338);
			this->button352->Name = L"button352";
			this->button352->Size = System::Drawing::Size(120, 75);
			this->button352->TabIndex = 33;
			this->button352->UseVisualStyleBackColor = true;
			this->button352->Click += gcnew System::EventHandler(this, &MyForm::button352_Click);
			// 
			// button353
			// 
			this->button353->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button353.BackgroundImage")));
			this->button353->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button353->Location = System::Drawing::Point(307, 338);
			this->button353->Name = L"button353";
			this->button353->Size = System::Drawing::Size(120, 75);
			this->button353->TabIndex = 32;
			this->button353->UseVisualStyleBackColor = true;
			this->button353->Click += gcnew System::EventHandler(this, &MyForm::button353_Click);
			// 
			// button354
			// 
			this->button354->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button354.BackgroundImage")));
			this->button354->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button354->Location = System::Drawing::Point(84, 338);
			this->button354->Name = L"button354";
			this->button354->Size = System::Drawing::Size(120, 75);
			this->button354->TabIndex = 31;
			this->button354->UseVisualStyleBackColor = true;
			this->button354->Click += gcnew System::EventHandler(this, &MyForm::button354_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.BackgroundImage")));
			this->pictureBox50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox50->Location = System::Drawing::Point(330, 57);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(296, 247);
			this->pictureBox50->TabIndex = 30;
			this->pictureBox50->TabStop = false;
			// 
			// tabPage53
			// 
			this->tabPage53->Controls->Add(this->button355);
			this->tabPage53->Controls->Add(this->button356);
			this->tabPage53->Controls->Add(this->button357);
			this->tabPage53->Controls->Add(this->button358);
			this->tabPage53->Controls->Add(this->button359);
			this->tabPage53->Controls->Add(this->button360);
			this->tabPage53->Controls->Add(this->button361);
			this->tabPage53->Controls->Add(this->button362);
			this->tabPage53->Controls->Add(this->pictureBox51);
			this->tabPage53->Location = System::Drawing::Point(4, 22);
			this->tabPage53->Name = L"tabPage53";
			this->tabPage53->Size = System::Drawing::Size(932, 624);
			this->tabPage53->TabIndex = 52;
			this->tabPage53->Text = L"tabPage53";
			this->tabPage53->UseVisualStyleBackColor = true;
			// 
			// button355
			// 
			this->button355->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button355.BackgroundImage")));
			this->button355->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button355->Location = System::Drawing::Point(735, 471);
			this->button355->Name = L"button355";
			this->button355->Size = System::Drawing::Size(120, 75);
			this->button355->TabIndex = 38;
			this->button355->UseVisualStyleBackColor = true;
			this->button355->Click += gcnew System::EventHandler(this, &MyForm::button355_Click);
			// 
			// button356
			// 
			this->button356->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button356.BackgroundImage")));
			this->button356->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button356->Location = System::Drawing::Point(735, 338);
			this->button356->Name = L"button356";
			this->button356->Size = System::Drawing::Size(120, 75);
			this->button356->TabIndex = 37;
			this->button356->UseVisualStyleBackColor = true;
			this->button356->Click += gcnew System::EventHandler(this, &MyForm::button356_Click);
			// 
			// button357
			// 
			this->button357->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button357.BackgroundImage")));
			this->button357->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button357->Location = System::Drawing::Point(520, 471);
			this->button357->Name = L"button357";
			this->button357->Size = System::Drawing::Size(120, 75);
			this->button357->TabIndex = 36;
			this->button357->UseVisualStyleBackColor = true;
			this->button357->Click += gcnew System::EventHandler(this, &MyForm::button357_Click);
			// 
			// button358
			// 
			this->button358->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button358.BackgroundImage")));
			this->button358->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button358->Location = System::Drawing::Point(311, 471);
			this->button358->Name = L"button358";
			this->button358->Size = System::Drawing::Size(120, 75);
			this->button358->TabIndex = 35;
			this->button358->UseVisualStyleBackColor = true;
			this->button358->Click += gcnew System::EventHandler(this, &MyForm::button358_Click);
			// 
			// button359
			// 
			this->button359->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button359.BackgroundImage")));
			this->button359->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button359->Location = System::Drawing::Point(88, 471);
			this->button359->Name = L"button359";
			this->button359->Size = System::Drawing::Size(120, 75);
			this->button359->TabIndex = 34;
			this->button359->UseVisualStyleBackColor = true;
			this->button359->Click += gcnew System::EventHandler(this, &MyForm::button359_Click);
			// 
			// button360
			// 
			this->button360->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button360.BackgroundImage")));
			this->button360->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button360->Location = System::Drawing::Point(520, 338);
			this->button360->Name = L"button360";
			this->button360->Size = System::Drawing::Size(120, 75);
			this->button360->TabIndex = 33;
			this->button360->UseVisualStyleBackColor = true;
			this->button360->Click += gcnew System::EventHandler(this, &MyForm::button360_Click);
			// 
			// button361
			// 
			this->button361->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button361.BackgroundImage")));
			this->button361->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button361->Location = System::Drawing::Point(311, 338);
			this->button361->Name = L"button361";
			this->button361->Size = System::Drawing::Size(120, 75);
			this->button361->TabIndex = 32;
			this->button361->UseVisualStyleBackColor = true;
			this->button361->Click += gcnew System::EventHandler(this, &MyForm::button361_Click);
			// 
			// button362
			// 
			this->button362->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button362.BackgroundImage")));
			this->button362->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button362->Location = System::Drawing::Point(88, 338);
			this->button362->Name = L"button362";
			this->button362->Size = System::Drawing::Size(120, 75);
			this->button362->TabIndex = 31;
			this->button362->UseVisualStyleBackColor = true;
			this->button362->Click += gcnew System::EventHandler(this, &MyForm::button362_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.BackgroundImage")));
			this->pictureBox51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox51->Location = System::Drawing::Point(334, 57);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(296, 247);
			this->pictureBox51->TabIndex = 30;
			this->pictureBox51->TabStop = false;
			// 
			// tabPage54
			// 
			this->tabPage54->Controls->Add(this->button363);
			this->tabPage54->Controls->Add(this->button364);
			this->tabPage54->Controls->Add(this->button365);
			this->tabPage54->Controls->Add(this->button366);
			this->tabPage54->Controls->Add(this->button367);
			this->tabPage54->Controls->Add(this->button368);
			this->tabPage54->Controls->Add(this->button369);
			this->tabPage54->Controls->Add(this->button370);
			this->tabPage54->Controls->Add(this->pictureBox52);
			this->tabPage54->Location = System::Drawing::Point(4, 22);
			this->tabPage54->Name = L"tabPage54";
			this->tabPage54->Size = System::Drawing::Size(932, 624);
			this->tabPage54->TabIndex = 53;
			this->tabPage54->Text = L"tabPage54";
			this->tabPage54->UseVisualStyleBackColor = true;
			// 
			// button363
			// 
			this->button363->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button363.BackgroundImage")));
			this->button363->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button363->Location = System::Drawing::Point(733, 471);
			this->button363->Name = L"button363";
			this->button363->Size = System::Drawing::Size(120, 75);
			this->button363->TabIndex = 38;
			this->button363->UseVisualStyleBackColor = true;
			this->button363->Click += gcnew System::EventHandler(this, &MyForm::button363_Click);
			// 
			// button364
			// 
			this->button364->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button364.BackgroundImage")));
			this->button364->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button364->Location = System::Drawing::Point(733, 338);
			this->button364->Name = L"button364";
			this->button364->Size = System::Drawing::Size(120, 75);
			this->button364->TabIndex = 37;
			this->button364->UseVisualStyleBackColor = true;
			this->button364->Click += gcnew System::EventHandler(this, &MyForm::button364_Click);
			// 
			// button365
			// 
			this->button365->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button365.BackgroundImage")));
			this->button365->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button365->Location = System::Drawing::Point(518, 471);
			this->button365->Name = L"button365";
			this->button365->Size = System::Drawing::Size(120, 75);
			this->button365->TabIndex = 36;
			this->button365->UseVisualStyleBackColor = true;
			this->button365->Click += gcnew System::EventHandler(this, &MyForm::button365_Click);
			// 
			// button366
			// 
			this->button366->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button366.BackgroundImage")));
			this->button366->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button366->Location = System::Drawing::Point(309, 471);
			this->button366->Name = L"button366";
			this->button366->Size = System::Drawing::Size(120, 75);
			this->button366->TabIndex = 35;
			this->button366->UseVisualStyleBackColor = true;
			this->button366->Click += gcnew System::EventHandler(this, &MyForm::button366_Click);
			// 
			// button367
			// 
			this->button367->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button367.BackgroundImage")));
			this->button367->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button367->Location = System::Drawing::Point(86, 471);
			this->button367->Name = L"button367";
			this->button367->Size = System::Drawing::Size(120, 75);
			this->button367->TabIndex = 34;
			this->button367->UseVisualStyleBackColor = true;
			this->button367->Click += gcnew System::EventHandler(this, &MyForm::button367_Click);
			// 
			// button368
			// 
			this->button368->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button368.BackgroundImage")));
			this->button368->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button368->Location = System::Drawing::Point(518, 338);
			this->button368->Name = L"button368";
			this->button368->Size = System::Drawing::Size(120, 75);
			this->button368->TabIndex = 33;
			this->button368->UseVisualStyleBackColor = true;
			this->button368->Click += gcnew System::EventHandler(this, &MyForm::button368_Click);
			// 
			// button369
			// 
			this->button369->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button369.BackgroundImage")));
			this->button369->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button369->Location = System::Drawing::Point(309, 338);
			this->button369->Name = L"button369";
			this->button369->Size = System::Drawing::Size(120, 75);
			this->button369->TabIndex = 32;
			this->button369->UseVisualStyleBackColor = true;
			this->button369->Click += gcnew System::EventHandler(this, &MyForm::button369_Click);
			// 
			// button370
			// 
			this->button370->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button370.BackgroundImage")));
			this->button370->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button370->Location = System::Drawing::Point(86, 338);
			this->button370->Name = L"button370";
			this->button370->Size = System::Drawing::Size(120, 75);
			this->button370->TabIndex = 31;
			this->button370->UseVisualStyleBackColor = true;
			this->button370->Click += gcnew System::EventHandler(this, &MyForm::button370_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.BackgroundImage")));
			this->pictureBox52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox52->Location = System::Drawing::Point(332, 57);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(296, 247);
			this->pictureBox52->TabIndex = 30;
			this->pictureBox52->TabStop = false;
			// 
			// tabPage55
			// 
			this->tabPage55->Controls->Add(this->button371);
			this->tabPage55->Controls->Add(this->button372);
			this->tabPage55->Controls->Add(this->button373);
			this->tabPage55->Controls->Add(this->button374);
			this->tabPage55->Controls->Add(this->button375);
			this->tabPage55->Controls->Add(this->button376);
			this->tabPage55->Controls->Add(this->button377);
			this->tabPage55->Controls->Add(this->button378);
			this->tabPage55->Controls->Add(this->pictureBox53);
			this->tabPage55->Location = System::Drawing::Point(4, 22);
			this->tabPage55->Name = L"tabPage55";
			this->tabPage55->Size = System::Drawing::Size(932, 624);
			this->tabPage55->TabIndex = 54;
			this->tabPage55->Text = L"tabPage55";
			this->tabPage55->UseVisualStyleBackColor = true;
			// 
			// button371
			// 
			this->button371->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button371.BackgroundImage")));
			this->button371->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button371->Location = System::Drawing::Point(730, 471);
			this->button371->Name = L"button371";
			this->button371->Size = System::Drawing::Size(120, 75);
			this->button371->TabIndex = 38;
			this->button371->UseVisualStyleBackColor = true;
			this->button371->Click += gcnew System::EventHandler(this, &MyForm::button371_Click);
			// 
			// button372
			// 
			this->button372->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button372.BackgroundImage")));
			this->button372->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button372->Location = System::Drawing::Point(730, 338);
			this->button372->Name = L"button372";
			this->button372->Size = System::Drawing::Size(120, 75);
			this->button372->TabIndex = 37;
			this->button372->UseVisualStyleBackColor = true;
			this->button372->Click += gcnew System::EventHandler(this, &MyForm::button372_Click);
			// 
			// button373
			// 
			this->button373->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button373.BackgroundImage")));
			this->button373->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button373->Location = System::Drawing::Point(515, 471);
			this->button373->Name = L"button373";
			this->button373->Size = System::Drawing::Size(120, 75);
			this->button373->TabIndex = 36;
			this->button373->UseVisualStyleBackColor = true;
			this->button373->Click += gcnew System::EventHandler(this, &MyForm::button373_Click);
			// 
			// button374
			// 
			this->button374->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button374.BackgroundImage")));
			this->button374->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button374->Location = System::Drawing::Point(306, 471);
			this->button374->Name = L"button374";
			this->button374->Size = System::Drawing::Size(120, 75);
			this->button374->TabIndex = 35;
			this->button374->UseVisualStyleBackColor = true;
			this->button374->Click += gcnew System::EventHandler(this, &MyForm::button374_Click);
			// 
			// button375
			// 
			this->button375->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button375.BackgroundImage")));
			this->button375->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button375->Location = System::Drawing::Point(83, 471);
			this->button375->Name = L"button375";
			this->button375->Size = System::Drawing::Size(120, 75);
			this->button375->TabIndex = 34;
			this->button375->UseVisualStyleBackColor = true;
			this->button375->Click += gcnew System::EventHandler(this, &MyForm::button375_Click);
			// 
			// button376
			// 
			this->button376->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button376.BackgroundImage")));
			this->button376->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button376->Location = System::Drawing::Point(515, 338);
			this->button376->Name = L"button376";
			this->button376->Size = System::Drawing::Size(120, 75);
			this->button376->TabIndex = 33;
			this->button376->UseVisualStyleBackColor = true;
			this->button376->Click += gcnew System::EventHandler(this, &MyForm::button376_Click);
			// 
			// button377
			// 
			this->button377->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button377.BackgroundImage")));
			this->button377->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button377->Location = System::Drawing::Point(306, 338);
			this->button377->Name = L"button377";
			this->button377->Size = System::Drawing::Size(120, 75);
			this->button377->TabIndex = 32;
			this->button377->UseVisualStyleBackColor = true;
			this->button377->Click += gcnew System::EventHandler(this, &MyForm::button377_Click);
			// 
			// button378
			// 
			this->button378->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button378.BackgroundImage")));
			this->button378->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button378->Location = System::Drawing::Point(83, 338);
			this->button378->Name = L"button378";
			this->button378->Size = System::Drawing::Size(120, 75);
			this->button378->TabIndex = 31;
			this->button378->UseVisualStyleBackColor = true;
			this->button378->Click += gcnew System::EventHandler(this, &MyForm::button378_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.BackgroundImage")));
			this->pictureBox53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox53->Location = System::Drawing::Point(329, 57);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(296, 247);
			this->pictureBox53->TabIndex = 30;
			this->pictureBox53->TabStop = false;
			// 
			// tabPage56
			// 
			this->tabPage56->Controls->Add(this->button379);
			this->tabPage56->Controls->Add(this->button380);
			this->tabPage56->Controls->Add(this->button381);
			this->tabPage56->Controls->Add(this->button382);
			this->tabPage56->Controls->Add(this->button383);
			this->tabPage56->Controls->Add(this->button384);
			this->tabPage56->Controls->Add(this->button385);
			this->tabPage56->Controls->Add(this->button386);
			this->tabPage56->Controls->Add(this->pictureBox54);
			this->tabPage56->Location = System::Drawing::Point(4, 22);
			this->tabPage56->Name = L"tabPage56";
			this->tabPage56->Size = System::Drawing::Size(932, 624);
			this->tabPage56->TabIndex = 55;
			this->tabPage56->Text = L"tabPage56";
			this->tabPage56->UseVisualStyleBackColor = true;
			// 
			// button379
			// 
			this->button379->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button379.BackgroundImage")));
			this->button379->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button379->Location = System::Drawing::Point(732, 471);
			this->button379->Name = L"button379";
			this->button379->Size = System::Drawing::Size(120, 75);
			this->button379->TabIndex = 38;
			this->button379->UseVisualStyleBackColor = true;
			this->button379->Click += gcnew System::EventHandler(this, &MyForm::button379_Click);
			// 
			// button380
			// 
			this->button380->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button380.BackgroundImage")));
			this->button380->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button380->Location = System::Drawing::Point(732, 338);
			this->button380->Name = L"button380";
			this->button380->Size = System::Drawing::Size(120, 75);
			this->button380->TabIndex = 37;
			this->button380->UseVisualStyleBackColor = true;
			this->button380->Click += gcnew System::EventHandler(this, &MyForm::button380_Click);
			// 
			// button381
			// 
			this->button381->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button381.BackgroundImage")));
			this->button381->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button381->Location = System::Drawing::Point(517, 471);
			this->button381->Name = L"button381";
			this->button381->Size = System::Drawing::Size(120, 75);
			this->button381->TabIndex = 36;
			this->button381->UseVisualStyleBackColor = true;
			this->button381->Click += gcnew System::EventHandler(this, &MyForm::button381_Click);
			// 
			// button382
			// 
			this->button382->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button382.BackgroundImage")));
			this->button382->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button382->Location = System::Drawing::Point(308, 471);
			this->button382->Name = L"button382";
			this->button382->Size = System::Drawing::Size(120, 75);
			this->button382->TabIndex = 35;
			this->button382->UseVisualStyleBackColor = true;
			this->button382->Click += gcnew System::EventHandler(this, &MyForm::button382_Click);
			// 
			// button383
			// 
			this->button383->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button383.BackgroundImage")));
			this->button383->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button383->Location = System::Drawing::Point(85, 471);
			this->button383->Name = L"button383";
			this->button383->Size = System::Drawing::Size(120, 75);
			this->button383->TabIndex = 34;
			this->button383->UseVisualStyleBackColor = true;
			this->button383->Click += gcnew System::EventHandler(this, &MyForm::button383_Click);
			// 
			// button384
			// 
			this->button384->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button384.BackgroundImage")));
			this->button384->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button384->Location = System::Drawing::Point(517, 338);
			this->button384->Name = L"button384";
			this->button384->Size = System::Drawing::Size(120, 75);
			this->button384->TabIndex = 33;
			this->button384->UseVisualStyleBackColor = true;
			this->button384->Click += gcnew System::EventHandler(this, &MyForm::button384_Click);
			// 
			// button385
			// 
			this->button385->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button385.BackgroundImage")));
			this->button385->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button385->Location = System::Drawing::Point(308, 338);
			this->button385->Name = L"button385";
			this->button385->Size = System::Drawing::Size(120, 75);
			this->button385->TabIndex = 32;
			this->button385->UseVisualStyleBackColor = true;
			this->button385->Click += gcnew System::EventHandler(this, &MyForm::button385_Click);
			// 
			// button386
			// 
			this->button386->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button386.BackgroundImage")));
			this->button386->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button386->Location = System::Drawing::Point(85, 338);
			this->button386->Name = L"button386";
			this->button386->Size = System::Drawing::Size(120, 75);
			this->button386->TabIndex = 31;
			this->button386->UseVisualStyleBackColor = true;
			this->button386->Click += gcnew System::EventHandler(this, &MyForm::button386_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.BackgroundImage")));
			this->pictureBox54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox54->Location = System::Drawing::Point(331, 57);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(296, 247);
			this->pictureBox54->TabIndex = 30;
			this->pictureBox54->TabStop = false;
			// 
			// tabPage57
			// 
			this->tabPage57->Controls->Add(this->button387);
			this->tabPage57->Controls->Add(this->button388);
			this->tabPage57->Controls->Add(this->button389);
			this->tabPage57->Controls->Add(this->button390);
			this->tabPage57->Controls->Add(this->button391);
			this->tabPage57->Controls->Add(this->button392);
			this->tabPage57->Controls->Add(this->button393);
			this->tabPage57->Controls->Add(this->button394);
			this->tabPage57->Controls->Add(this->pictureBox55);
			this->tabPage57->Location = System::Drawing::Point(4, 22);
			this->tabPage57->Name = L"tabPage57";
			this->tabPage57->Size = System::Drawing::Size(932, 624);
			this->tabPage57->TabIndex = 56;
			this->tabPage57->Text = L"tabPage57";
			this->tabPage57->UseVisualStyleBackColor = true;
			// 
			// button387
			// 
			this->button387->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button387.BackgroundImage")));
			this->button387->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button387->Location = System::Drawing::Point(732, 471);
			this->button387->Name = L"button387";
			this->button387->Size = System::Drawing::Size(120, 75);
			this->button387->TabIndex = 38;
			this->button387->UseVisualStyleBackColor = true;
			this->button387->Click += gcnew System::EventHandler(this, &MyForm::button387_Click);
			// 
			// button388
			// 
			this->button388->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button388.BackgroundImage")));
			this->button388->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button388->Location = System::Drawing::Point(732, 338);
			this->button388->Name = L"button388";
			this->button388->Size = System::Drawing::Size(120, 75);
			this->button388->TabIndex = 37;
			this->button388->UseVisualStyleBackColor = true;
			this->button388->Click += gcnew System::EventHandler(this, &MyForm::button388_Click);
			// 
			// button389
			// 
			this->button389->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button389.BackgroundImage")));
			this->button389->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button389->Location = System::Drawing::Point(517, 471);
			this->button389->Name = L"button389";
			this->button389->Size = System::Drawing::Size(120, 75);
			this->button389->TabIndex = 36;
			this->button389->UseVisualStyleBackColor = true;
			this->button389->Click += gcnew System::EventHandler(this, &MyForm::button389_Click);
			// 
			// button390
			// 
			this->button390->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button390.BackgroundImage")));
			this->button390->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button390->Location = System::Drawing::Point(308, 471);
			this->button390->Name = L"button390";
			this->button390->Size = System::Drawing::Size(120, 75);
			this->button390->TabIndex = 35;
			this->button390->UseVisualStyleBackColor = true;
			this->button390->Click += gcnew System::EventHandler(this, &MyForm::button390_Click);
			// 
			// button391
			// 
			this->button391->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button391.BackgroundImage")));
			this->button391->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button391->Location = System::Drawing::Point(85, 471);
			this->button391->Name = L"button391";
			this->button391->Size = System::Drawing::Size(120, 75);
			this->button391->TabIndex = 34;
			this->button391->UseVisualStyleBackColor = true;
			this->button391->Click += gcnew System::EventHandler(this, &MyForm::button391_Click);
			// 
			// button392
			// 
			this->button392->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button392.BackgroundImage")));
			this->button392->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button392->Location = System::Drawing::Point(517, 338);
			this->button392->Name = L"button392";
			this->button392->Size = System::Drawing::Size(120, 75);
			this->button392->TabIndex = 33;
			this->button392->UseVisualStyleBackColor = true;
			this->button392->Click += gcnew System::EventHandler(this, &MyForm::button392_Click);
			// 
			// button393
			// 
			this->button393->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button393.BackgroundImage")));
			this->button393->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button393->Location = System::Drawing::Point(308, 338);
			this->button393->Name = L"button393";
			this->button393->Size = System::Drawing::Size(120, 75);
			this->button393->TabIndex = 32;
			this->button393->UseVisualStyleBackColor = true;
			this->button393->Click += gcnew System::EventHandler(this, &MyForm::button393_Click);
			// 
			// button394
			// 
			this->button394->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button394.BackgroundImage")));
			this->button394->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button394->Location = System::Drawing::Point(85, 338);
			this->button394->Name = L"button394";
			this->button394->Size = System::Drawing::Size(120, 75);
			this->button394->TabIndex = 31;
			this->button394->UseVisualStyleBackColor = true;
			this->button394->Click += gcnew System::EventHandler(this, &MyForm::button394_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.BackgroundImage")));
			this->pictureBox55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox55->Location = System::Drawing::Point(331, 57);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(296, 247);
			this->pictureBox55->TabIndex = 30;
			this->pictureBox55->TabStop = false;
			// 
			// tabPage58
			// 
			this->tabPage58->Controls->Add(this->button395);
			this->tabPage58->Controls->Add(this->button396);
			this->tabPage58->Controls->Add(this->button397);
			this->tabPage58->Controls->Add(this->button398);
			this->tabPage58->Controls->Add(this->button399);
			this->tabPage58->Controls->Add(this->button400);
			this->tabPage58->Controls->Add(this->button401);
			this->tabPage58->Controls->Add(this->button402);
			this->tabPage58->Controls->Add(this->pictureBox56);
			this->tabPage58->Location = System::Drawing::Point(4, 22);
			this->tabPage58->Name = L"tabPage58";
			this->tabPage58->Size = System::Drawing::Size(932, 624);
			this->tabPage58->TabIndex = 57;
			this->tabPage58->Text = L"tabPage58";
			this->tabPage58->UseVisualStyleBackColor = true;
			// 
			// button395
			// 
			this->button395->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button395.BackgroundImage")));
			this->button395->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button395->Location = System::Drawing::Point(732, 471);
			this->button395->Name = L"button395";
			this->button395->Size = System::Drawing::Size(120, 75);
			this->button395->TabIndex = 38;
			this->button395->UseVisualStyleBackColor = true;
			this->button395->Click += gcnew System::EventHandler(this, &MyForm::button395_Click);
			// 
			// button396
			// 
			this->button396->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button396.BackgroundImage")));
			this->button396->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button396->Location = System::Drawing::Point(732, 338);
			this->button396->Name = L"button396";
			this->button396->Size = System::Drawing::Size(120, 75);
			this->button396->TabIndex = 37;
			this->button396->UseVisualStyleBackColor = true;
			this->button396->Click += gcnew System::EventHandler(this, &MyForm::button396_Click);
			// 
			// button397
			// 
			this->button397->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button397.BackgroundImage")));
			this->button397->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button397->Location = System::Drawing::Point(517, 471);
			this->button397->Name = L"button397";
			this->button397->Size = System::Drawing::Size(120, 75);
			this->button397->TabIndex = 36;
			this->button397->UseVisualStyleBackColor = true;
			this->button397->Click += gcnew System::EventHandler(this, &MyForm::button397_Click);
			// 
			// button398
			// 
			this->button398->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button398.BackgroundImage")));
			this->button398->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button398->Location = System::Drawing::Point(308, 471);
			this->button398->Name = L"button398";
			this->button398->Size = System::Drawing::Size(120, 75);
			this->button398->TabIndex = 35;
			this->button398->UseVisualStyleBackColor = true;
			this->button398->Click += gcnew System::EventHandler(this, &MyForm::button398_Click);
			// 
			// button399
			// 
			this->button399->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button399.BackgroundImage")));
			this->button399->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button399->Location = System::Drawing::Point(85, 471);
			this->button399->Name = L"button399";
			this->button399->Size = System::Drawing::Size(120, 75);
			this->button399->TabIndex = 34;
			this->button399->UseVisualStyleBackColor = true;
			this->button399->Click += gcnew System::EventHandler(this, &MyForm::button399_Click);
			// 
			// button400
			// 
			this->button400->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button400.BackgroundImage")));
			this->button400->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button400->Location = System::Drawing::Point(517, 338);
			this->button400->Name = L"button400";
			this->button400->Size = System::Drawing::Size(120, 75);
			this->button400->TabIndex = 33;
			this->button400->UseVisualStyleBackColor = true;
			this->button400->Click += gcnew System::EventHandler(this, &MyForm::button400_Click);
			// 
			// button401
			// 
			this->button401->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button401.BackgroundImage")));
			this->button401->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button401->Location = System::Drawing::Point(308, 338);
			this->button401->Name = L"button401";
			this->button401->Size = System::Drawing::Size(120, 75);
			this->button401->TabIndex = 32;
			this->button401->UseVisualStyleBackColor = true;
			this->button401->Click += gcnew System::EventHandler(this, &MyForm::button401_Click);
			// 
			// button402
			// 
			this->button402->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button402.BackgroundImage")));
			this->button402->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button402->Location = System::Drawing::Point(85, 338);
			this->button402->Name = L"button402";
			this->button402->Size = System::Drawing::Size(120, 75);
			this->button402->TabIndex = 31;
			this->button402->UseVisualStyleBackColor = true;
			this->button402->Click += gcnew System::EventHandler(this, &MyForm::button402_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.BackgroundImage")));
			this->pictureBox56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox56->Location = System::Drawing::Point(331, 57);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(296, 247);
			this->pictureBox56->TabIndex = 30;
			this->pictureBox56->TabStop = false;
			// 
			// tabPage59
			// 
			this->tabPage59->Controls->Add(this->button403);
			this->tabPage59->Controls->Add(this->button404);
			this->tabPage59->Controls->Add(this->button405);
			this->tabPage59->Controls->Add(this->button406);
			this->tabPage59->Controls->Add(this->button407);
			this->tabPage59->Controls->Add(this->button408);
			this->tabPage59->Controls->Add(this->button409);
			this->tabPage59->Controls->Add(this->button410);
			this->tabPage59->Controls->Add(this->pictureBox57);
			this->tabPage59->Location = System::Drawing::Point(4, 22);
			this->tabPage59->Name = L"tabPage59";
			this->tabPage59->Size = System::Drawing::Size(932, 624);
			this->tabPage59->TabIndex = 58;
			this->tabPage59->Text = L"tabPage59";
			this->tabPage59->UseVisualStyleBackColor = true;
			// 
			// button403
			// 
			this->button403->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button403.BackgroundImage")));
			this->button403->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button403->Location = System::Drawing::Point(731, 471);
			this->button403->Name = L"button403";
			this->button403->Size = System::Drawing::Size(120, 75);
			this->button403->TabIndex = 38;
			this->button403->UseVisualStyleBackColor = true;
			this->button403->Click += gcnew System::EventHandler(this, &MyForm::button403_Click);
			// 
			// button404
			// 
			this->button404->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button404.BackgroundImage")));
			this->button404->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button404->Location = System::Drawing::Point(731, 338);
			this->button404->Name = L"button404";
			this->button404->Size = System::Drawing::Size(120, 75);
			this->button404->TabIndex = 37;
			this->button404->UseVisualStyleBackColor = true;
			this->button404->Click += gcnew System::EventHandler(this, &MyForm::button404_Click);
			// 
			// button405
			// 
			this->button405->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button405.BackgroundImage")));
			this->button405->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button405->Location = System::Drawing::Point(516, 471);
			this->button405->Name = L"button405";
			this->button405->Size = System::Drawing::Size(120, 75);
			this->button405->TabIndex = 36;
			this->button405->UseVisualStyleBackColor = true;
			this->button405->Click += gcnew System::EventHandler(this, &MyForm::button405_Click);
			// 
			// button406
			// 
			this->button406->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button406.BackgroundImage")));
			this->button406->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button406->Location = System::Drawing::Point(307, 471);
			this->button406->Name = L"button406";
			this->button406->Size = System::Drawing::Size(120, 75);
			this->button406->TabIndex = 35;
			this->button406->UseVisualStyleBackColor = true;
			this->button406->Click += gcnew System::EventHandler(this, &MyForm::button406_Click);
			// 
			// button407
			// 
			this->button407->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button407.BackgroundImage")));
			this->button407->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button407->Location = System::Drawing::Point(84, 471);
			this->button407->Name = L"button407";
			this->button407->Size = System::Drawing::Size(120, 75);
			this->button407->TabIndex = 34;
			this->button407->UseVisualStyleBackColor = true;
			this->button407->Click += gcnew System::EventHandler(this, &MyForm::button407_Click);
			// 
			// button408
			// 
			this->button408->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button408.BackgroundImage")));
			this->button408->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button408->Location = System::Drawing::Point(516, 338);
			this->button408->Name = L"button408";
			this->button408->Size = System::Drawing::Size(120, 75);
			this->button408->TabIndex = 33;
			this->button408->UseVisualStyleBackColor = true;
			this->button408->Click += gcnew System::EventHandler(this, &MyForm::button408_Click);
			// 
			// button409
			// 
			this->button409->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button409.BackgroundImage")));
			this->button409->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button409->Location = System::Drawing::Point(307, 338);
			this->button409->Name = L"button409";
			this->button409->Size = System::Drawing::Size(120, 75);
			this->button409->TabIndex = 32;
			this->button409->UseVisualStyleBackColor = true;
			this->button409->Click += gcnew System::EventHandler(this, &MyForm::button409_Click);
			// 
			// button410
			// 
			this->button410->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button410.BackgroundImage")));
			this->button410->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button410->Location = System::Drawing::Point(84, 338);
			this->button410->Name = L"button410";
			this->button410->Size = System::Drawing::Size(120, 75);
			this->button410->TabIndex = 31;
			this->button410->UseVisualStyleBackColor = true;
			this->button410->Click += gcnew System::EventHandler(this, &MyForm::button410_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.BackgroundImage")));
			this->pictureBox57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox57->Location = System::Drawing::Point(330, 57);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(296, 247);
			this->pictureBox57->TabIndex = 30;
			this->pictureBox57->TabStop = false;
			// 
			// tabPage60
			// 
			this->tabPage60->Controls->Add(this->button411);
			this->tabPage60->Controls->Add(this->button412);
			this->tabPage60->Controls->Add(this->button413);
			this->tabPage60->Controls->Add(this->button414);
			this->tabPage60->Controls->Add(this->button415);
			this->tabPage60->Controls->Add(this->button416);
			this->tabPage60->Controls->Add(this->button417);
			this->tabPage60->Controls->Add(this->button418);
			this->tabPage60->Controls->Add(this->pictureBox58);
			this->tabPage60->Location = System::Drawing::Point(4, 22);
			this->tabPage60->Name = L"tabPage60";
			this->tabPage60->Size = System::Drawing::Size(932, 624);
			this->tabPage60->TabIndex = 59;
			this->tabPage60->Text = L"tabPage60";
			this->tabPage60->UseVisualStyleBackColor = true;
			// 
			// button411
			// 
			this->button411->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button411.BackgroundImage")));
			this->button411->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button411->Location = System::Drawing::Point(731, 471);
			this->button411->Name = L"button411";
			this->button411->Size = System::Drawing::Size(120, 75);
			this->button411->TabIndex = 38;
			this->button411->UseVisualStyleBackColor = true;
			this->button411->Click += gcnew System::EventHandler(this, &MyForm::button411_Click);
			// 
			// button412
			// 
			this->button412->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button412.BackgroundImage")));
			this->button412->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button412->Location = System::Drawing::Point(731, 338);
			this->button412->Name = L"button412";
			this->button412->Size = System::Drawing::Size(120, 75);
			this->button412->TabIndex = 37;
			this->button412->UseVisualStyleBackColor = true;
			this->button412->Click += gcnew System::EventHandler(this, &MyForm::button412_Click);
			// 
			// button413
			// 
			this->button413->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button413.BackgroundImage")));
			this->button413->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button413->Location = System::Drawing::Point(516, 471);
			this->button413->Name = L"button413";
			this->button413->Size = System::Drawing::Size(120, 75);
			this->button413->TabIndex = 36;
			this->button413->UseVisualStyleBackColor = true;
			this->button413->Click += gcnew System::EventHandler(this, &MyForm::button413_Click);
			// 
			// button414
			// 
			this->button414->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button414.BackgroundImage")));
			this->button414->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button414->Location = System::Drawing::Point(307, 471);
			this->button414->Name = L"button414";
			this->button414->Size = System::Drawing::Size(120, 75);
			this->button414->TabIndex = 35;
			this->button414->UseVisualStyleBackColor = true;
			this->button414->Click += gcnew System::EventHandler(this, &MyForm::button414_Click);
			// 
			// button415
			// 
			this->button415->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button415.BackgroundImage")));
			this->button415->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button415->Location = System::Drawing::Point(84, 471);
			this->button415->Name = L"button415";
			this->button415->Size = System::Drawing::Size(120, 75);
			this->button415->TabIndex = 34;
			this->button415->UseVisualStyleBackColor = true;
			this->button415->Click += gcnew System::EventHandler(this, &MyForm::button415_Click);
			// 
			// button416
			// 
			this->button416->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button416.BackgroundImage")));
			this->button416->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button416->Location = System::Drawing::Point(516, 338);
			this->button416->Name = L"button416";
			this->button416->Size = System::Drawing::Size(120, 75);
			this->button416->TabIndex = 33;
			this->button416->UseVisualStyleBackColor = true;
			this->button416->Click += gcnew System::EventHandler(this, &MyForm::button416_Click);
			// 
			// button417
			// 
			this->button417->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button417.BackgroundImage")));
			this->button417->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button417->Location = System::Drawing::Point(307, 338);
			this->button417->Name = L"button417";
			this->button417->Size = System::Drawing::Size(120, 75);
			this->button417->TabIndex = 32;
			this->button417->UseVisualStyleBackColor = true;
			this->button417->Click += gcnew System::EventHandler(this, &MyForm::button417_Click);
			// 
			// button418
			// 
			this->button418->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button418.BackgroundImage")));
			this->button418->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button418->Location = System::Drawing::Point(84, 338);
			this->button418->Name = L"button418";
			this->button418->Size = System::Drawing::Size(120, 75);
			this->button418->TabIndex = 31;
			this->button418->UseVisualStyleBackColor = true;
			this->button418->Click += gcnew System::EventHandler(this, &MyForm::button418_Click);
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.BackgroundImage")));
			this->pictureBox58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox58->Location = System::Drawing::Point(330, 57);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(296, 247);
			this->pictureBox58->TabIndex = 30;
			this->pictureBox58->TabStop = false;
			// 
			// tabPage61
			// 
			this->tabPage61->Controls->Add(this->button419);
			this->tabPage61->Controls->Add(this->button420);
			this->tabPage61->Controls->Add(this->button421);
			this->tabPage61->Controls->Add(this->button422);
			this->tabPage61->Controls->Add(this->button423);
			this->tabPage61->Controls->Add(this->button424);
			this->tabPage61->Controls->Add(this->button425);
			this->tabPage61->Controls->Add(this->button426);
			this->tabPage61->Controls->Add(this->pictureBox59);
			this->tabPage61->Location = System::Drawing::Point(4, 22);
			this->tabPage61->Name = L"tabPage61";
			this->tabPage61->Size = System::Drawing::Size(932, 624);
			this->tabPage61->TabIndex = 60;
			this->tabPage61->Text = L"tabPage61";
			this->tabPage61->UseVisualStyleBackColor = true;
			// 
			// button419
			// 
			this->button419->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button419.BackgroundImage")));
			this->button419->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button419->Location = System::Drawing::Point(734, 471);
			this->button419->Name = L"button419";
			this->button419->Size = System::Drawing::Size(120, 75);
			this->button419->TabIndex = 38;
			this->button419->UseVisualStyleBackColor = true;
			this->button419->Click += gcnew System::EventHandler(this, &MyForm::button419_Click);
			// 
			// button420
			// 
			this->button420->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button420.BackgroundImage")));
			this->button420->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button420->Location = System::Drawing::Point(734, 338);
			this->button420->Name = L"button420";
			this->button420->Size = System::Drawing::Size(120, 75);
			this->button420->TabIndex = 37;
			this->button420->UseVisualStyleBackColor = true;
			this->button420->Click += gcnew System::EventHandler(this, &MyForm::button420_Click);
			// 
			// button421
			// 
			this->button421->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button421.BackgroundImage")));
			this->button421->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button421->Location = System::Drawing::Point(519, 471);
			this->button421->Name = L"button421";
			this->button421->Size = System::Drawing::Size(120, 75);
			this->button421->TabIndex = 36;
			this->button421->UseVisualStyleBackColor = true;
			this->button421->Click += gcnew System::EventHandler(this, &MyForm::button421_Click);
			// 
			// button422
			// 
			this->button422->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button422.BackgroundImage")));
			this->button422->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button422->Location = System::Drawing::Point(310, 471);
			this->button422->Name = L"button422";
			this->button422->Size = System::Drawing::Size(120, 75);
			this->button422->TabIndex = 35;
			this->button422->UseVisualStyleBackColor = true;
			this->button422->Click += gcnew System::EventHandler(this, &MyForm::button422_Click);
			// 
			// button423
			// 
			this->button423->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button423.BackgroundImage")));
			this->button423->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button423->Location = System::Drawing::Point(87, 471);
			this->button423->Name = L"button423";
			this->button423->Size = System::Drawing::Size(120, 75);
			this->button423->TabIndex = 34;
			this->button423->UseVisualStyleBackColor = true;
			this->button423->Click += gcnew System::EventHandler(this, &MyForm::button423_Click);
			// 
			// button424
			// 
			this->button424->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button424.BackgroundImage")));
			this->button424->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button424->Location = System::Drawing::Point(519, 338);
			this->button424->Name = L"button424";
			this->button424->Size = System::Drawing::Size(120, 75);
			this->button424->TabIndex = 33;
			this->button424->UseVisualStyleBackColor = true;
			this->button424->Click += gcnew System::EventHandler(this, &MyForm::button424_Click);
			// 
			// button425
			// 
			this->button425->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button425.BackgroundImage")));
			this->button425->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button425->Location = System::Drawing::Point(310, 338);
			this->button425->Name = L"button425";
			this->button425->Size = System::Drawing::Size(120, 75);
			this->button425->TabIndex = 32;
			this->button425->UseVisualStyleBackColor = true;
			this->button425->Click += gcnew System::EventHandler(this, &MyForm::button425_Click);
			// 
			// button426
			// 
			this->button426->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button426.BackgroundImage")));
			this->button426->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button426->Location = System::Drawing::Point(87, 338);
			this->button426->Name = L"button426";
			this->button426->Size = System::Drawing::Size(120, 75);
			this->button426->TabIndex = 31;
			this->button426->UseVisualStyleBackColor = true;
			this->button426->Click += gcnew System::EventHandler(this, &MyForm::button426_Click);
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.BackgroundImage")));
			this->pictureBox59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox59->Location = System::Drawing::Point(333, 57);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(296, 247);
			this->pictureBox59->TabIndex = 30;
			this->pictureBox59->TabStop = false;
			// 
			// tabPage62
			// 
			this->tabPage62->Controls->Add(this->button427);
			this->tabPage62->Controls->Add(this->button428);
			this->tabPage62->Controls->Add(this->button429);
			this->tabPage62->Controls->Add(this->button430);
			this->tabPage62->Controls->Add(this->button431);
			this->tabPage62->Controls->Add(this->button432);
			this->tabPage62->Controls->Add(this->button433);
			this->tabPage62->Controls->Add(this->button434);
			this->tabPage62->Controls->Add(this->pictureBox60);
			this->tabPage62->Location = System::Drawing::Point(4, 22);
			this->tabPage62->Name = L"tabPage62";
			this->tabPage62->Size = System::Drawing::Size(932, 624);
			this->tabPage62->TabIndex = 61;
			this->tabPage62->Text = L"tabPage62";
			this->tabPage62->UseVisualStyleBackColor = true;
			// 
			// button427
			// 
			this->button427->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button427.BackgroundImage")));
			this->button427->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button427->Location = System::Drawing::Point(730, 471);
			this->button427->Name = L"button427";
			this->button427->Size = System::Drawing::Size(120, 75);
			this->button427->TabIndex = 38;
			this->button427->UseVisualStyleBackColor = true;
			this->button427->Click += gcnew System::EventHandler(this, &MyForm::button427_Click);
			// 
			// button428
			// 
			this->button428->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button428.BackgroundImage")));
			this->button428->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button428->Location = System::Drawing::Point(730, 338);
			this->button428->Name = L"button428";
			this->button428->Size = System::Drawing::Size(120, 75);
			this->button428->TabIndex = 37;
			this->button428->UseVisualStyleBackColor = true;
			this->button428->Click += gcnew System::EventHandler(this, &MyForm::button428_Click);
			// 
			// button429
			// 
			this->button429->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button429.BackgroundImage")));
			this->button429->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button429->Location = System::Drawing::Point(515, 471);
			this->button429->Name = L"button429";
			this->button429->Size = System::Drawing::Size(120, 75);
			this->button429->TabIndex = 36;
			this->button429->UseVisualStyleBackColor = true;
			this->button429->Click += gcnew System::EventHandler(this, &MyForm::button429_Click);
			// 
			// button430
			// 
			this->button430->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button430.BackgroundImage")));
			this->button430->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button430->Location = System::Drawing::Point(306, 471);
			this->button430->Name = L"button430";
			this->button430->Size = System::Drawing::Size(120, 75);
			this->button430->TabIndex = 35;
			this->button430->UseVisualStyleBackColor = true;
			this->button430->Click += gcnew System::EventHandler(this, &MyForm::button430_Click);
			// 
			// button431
			// 
			this->button431->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button431.BackgroundImage")));
			this->button431->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button431->Location = System::Drawing::Point(83, 471);
			this->button431->Name = L"button431";
			this->button431->Size = System::Drawing::Size(120, 75);
			this->button431->TabIndex = 34;
			this->button431->UseVisualStyleBackColor = true;
			this->button431->Click += gcnew System::EventHandler(this, &MyForm::button431_Click);
			// 
			// button432
			// 
			this->button432->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button432.BackgroundImage")));
			this->button432->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button432->Location = System::Drawing::Point(515, 338);
			this->button432->Name = L"button432";
			this->button432->Size = System::Drawing::Size(120, 75);
			this->button432->TabIndex = 33;
			this->button432->UseVisualStyleBackColor = true;
			this->button432->Click += gcnew System::EventHandler(this, &MyForm::button432_Click);
			// 
			// button433
			// 
			this->button433->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button433.BackgroundImage")));
			this->button433->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button433->Location = System::Drawing::Point(306, 338);
			this->button433->Name = L"button433";
			this->button433->Size = System::Drawing::Size(120, 75);
			this->button433->TabIndex = 32;
			this->button433->UseVisualStyleBackColor = true;
			this->button433->Click += gcnew System::EventHandler(this, &MyForm::button433_Click);
			// 
			// button434
			// 
			this->button434->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button434.BackgroundImage")));
			this->button434->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button434->Location = System::Drawing::Point(83, 338);
			this->button434->Name = L"button434";
			this->button434->Size = System::Drawing::Size(120, 75);
			this->button434->TabIndex = 31;
			this->button434->UseVisualStyleBackColor = true;
			this->button434->Click += gcnew System::EventHandler(this, &MyForm::button434_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.BackgroundImage")));
			this->pictureBox60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox60->Location = System::Drawing::Point(329, 57);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(296, 247);
			this->pictureBox60->TabIndex = 30;
			this->pictureBox60->TabStop = false;
			// 
			// tabPage63
			// 
			this->tabPage63->Controls->Add(this->label5);
			this->tabPage63->Location = System::Drawing::Point(4, 22);
			this->tabPage63->Name = L"tabPage63";
			this->tabPage63->Size = System::Drawing::Size(932, 624);
			this->tabPage63->TabIndex = 62;
			this->tabPage63->Text = L"tabPage63";
			this->tabPage63->UseVisualStyleBackColor = true;
			this->tabPage63->Click += gcnew System::EventHandler(this, &MyForm::tabPage63_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(235, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(411, 46);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ваше время истекло";
			// 
			// tabPage64
			// 
			this->tabPage64->Controls->Add(this->label6);
			this->tabPage64->Location = System::Drawing::Point(4, 22);
			this->tabPage64->Name = L"tabPage64";
			this->tabPage64->Size = System::Drawing::Size(932, 624);
			this->tabPage64->TabIndex = 63;
			this->tabPage64->Text = L"tabPage64";
			this->tabPage64->UseVisualStyleBackColor = true;
			this->tabPage64->Click += gcnew System::EventHandler(this, &MyForm::tabPage64_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(312, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(247, 46);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Конец теста";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(934, 596);
			this->Controls->Add(this->tabControl1);
			this->Location = System::Drawing::Point(10, 10);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->tabPage10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->tabPage11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->tabPage13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->tabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->tabPage16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->tabPage17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->tabPage18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->tabPage19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->tabPage20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->tabPage21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->tabPage22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->tabPage23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->tabPage24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->tabPage25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->tabPage26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->tabPage27->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->tabPage28->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			this->tabPage29->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->tabPage30->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->tabPage31->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			this->tabPage32->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->tabPage33->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->tabPage34->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->tabPage35->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->tabPage36->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->tabPage37->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			this->tabPage38->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->tabPage39->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->tabPage40->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			this->tabPage41->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->tabPage42->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			this->tabPage43->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			this->tabPage44->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			this->tabPage45->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			this->tabPage46->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			this->tabPage47->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->tabPage48->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			this->tabPage49->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			this->tabPage50->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			this->tabPage51->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			this->tabPage52->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			this->tabPage53->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			this->tabPage54->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			this->tabPage55->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			this->tabPage56->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			this->tabPage57->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			this->tabPage58->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			this->tabPage59->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			this->tabPage60->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			this->tabPage61->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			this->tabPage62->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			this->tabPage63->ResumeLayout(false);
			this->tabPage63->PerformLayout();
			this->tabPage64->ResumeLayout(false);
			this->tabPage64->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int start = GetTickCount();

		// Таймер, выводящий время в формате "Минуты : Секунды", с нажатия кнопки "Старт"
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	sec++;

	if (sec == 60) {
		sec = 0;
		min++;
	}
	
	if (sec < 10) { Second = Convert::ToString("0" + sec); } else { Second = Convert::ToString(sec); };
	if (min < 10) { Minute = Convert::ToString("0" + min); } else { Second = Convert::ToString(min); };

	// label3->Text = Minute + " : " + Second;      //Время в формате "Минуты : Секунды", с нажатия кнопки "Старт" на экране

	if (sec == 1200) {
		timer1->Stop();
	}
}
		 // Таймер, выводящий количество секунд, прошедших с нажатия кнопки "Старт"
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	sec1++;
	Second1 = Convert::ToString(sec1);
	//label4->Text = Second1;         //Вывод количества секунд, прошедших с нажатия кнопки "Старт" на экран

	if (sec1 == 1200)  tabControl1->SelectedTab = tabControl1->TabPages["TabPage63"];
}

		//первый слайд
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage7"];
}
		 //второй слайд
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage1"];

	timer1->Start();
	timer2->Start();

	time_t now;
	struct tm nowlocal;
	now = time(NULL);
	nowlocal = *localtime(&now);
	int sec = nowlocal.tm_hour * 3600 + nowlocal.tm_min * 60 + nowlocal.tm_sec;
	int day = nowlocal.tm_mday;
	int month = nowlocal.tm_mon + 1;
	int year = nowlocal.tm_year + 1900;

	file(sec, day, month, year, dd1, dd2, dd3);

	int table = 1;
	int series = 0;
	int correct_10 = 0;
	double start_time = 0.000;
	code_0(second, dd1);
	code_1(table,second, start_time, dd1);
	array_start[0] = start_time;

	int end = GetTickCount();
	double time = (end - start) * 0.001;
	//label7->Text = System::Convert::ToString(time);  //Время прошедшее с начала запуска программы, и до нажатия кнопки "Старт"
}

		//A1_1 (1)
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 1;
	int correct_10 = 0;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10,second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		//A1_2 (2)
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 2;
	int correct_10 = 0;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		//A1_3 (3)
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 3;
	int correct_10 = 0;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		//A1_4 (4)
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 4;
	int correct_10 = 1;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		//A1_5 (5)
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 5;
	int correct_10 = 0;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		//A1_6 (6)
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage2"];
	int table = 1;
	int next_table = 2;
	int number = 6;
	int correct_10 = 0;
	array_1[0] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[1] = start_time;
	array_end[0] = end_time;
}
		 //A2_1 (7)
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 1;
	int correct_10 = 0;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A2_2 (8)
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 2;
	int correct_10 = 0;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A2_3 (9)
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 3;
	int correct_10 = 0;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A2_4 (10)
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 4;
	int correct_10 = 0;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A2_5 (11)
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 5;
	int correct_10 = 1;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A2_6 (12)
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage3"];
	int table = 2;
	int next_table = 3;
	int number = 6;
	int correct_10 = 0;
	array_1[1] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[2] = start_time;
	array_end[1] = end_time;
}
		 //A3_1 (13)
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 1;
	int correct_10 = 1;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A3_2 (14)
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 2;
	int correct_10 = 0;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A3_3 (15)
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 3;
	int correct_10 = 0;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A3_4 (16)
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 4;
	int correct_10 = 0;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A3_5 (17)
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 5;
	int correct_10 = 0;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A3_6 (18)
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage4"];
	int table = 3;
	int next_table = 4;
	int number = 6;
	int correct_10 = 0;
	array_1[2] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[3] = start_time;
	array_end[2] = end_time;
}
		 //A4_1 (19)
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 1;
	int correct_10 = 0;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
	//raven_all(series, table, correct_10);
}
		 //A4_2 (20)
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 2;
	int correct_10 = 1;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
}
		 //A4_3 (21)
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 3;
	int correct_10 = 0;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
}
		 //A4_4 (22)
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 4;
	int correct_10 = 0;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
}
		 //A4_5 (23)
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 5;
	int correct_10 = 0;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
}
		 //A4_6 (24)
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage5"];
	int table = 4;
	int next_table = 5;
	int number = 6;
	int correct_10 = 0;
	array_1[3] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[4] = start_time;
	array_end[3] = end_time;
}
		 //A5_1 (25)
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 1;
	int correct_10 = 0;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A5_2 (26)
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 2;
	int correct_10 = 0;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A5_3 (27)
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 3;
	int correct_10 = 0;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A5_4 (28)
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 4;
	int correct_10 = 0;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A5_5 (29)
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 5;
	int correct_10 = 0;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A5_6 (30)
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage8"];
	int table = 5;
	int next_table = 6;
	int number = 6;
	int correct_10 = 1;
	array_1[4] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[5] = start_time;
	array_end[4] = end_time;
}
		 //A6_1 (31)
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 1;
	int correct_10 = 0;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A6_2 (32)
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 2;
	int correct_10 = 0;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A6_3 (33)
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 3;
	int correct_10 = 1;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A6_4 (34)
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 4;
	int correct_10 = 0;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A6_5 (35)
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 5;
	int correct_10 = 0;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A6_6 (36)
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage9"];
	int table = 6;
	int next_table = 7;
	int number = 6;
	int correct_10 = 0;
	array_1[5] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[6] = start_time;
	array_end[5] = end_time;
}
		 //A7_1 (37)
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 1;
	int correct_10 = 0;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A7_2 (38)
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 2;
	int correct_10 = 0;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A7_3 (39)
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 3;
	int correct_10 = 0;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A7_4 (40)
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 4;
	int correct_10 = 0;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A7_5 (41)
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 5;
	int correct_10 = 0;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A7_6 (42)
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage10"];
	int table = 7;
	int next_table = 8;
	int number = 6;
	int correct_10 = 1;
	array_1[6] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[7] = start_time;
	array_end[6] = end_time;
}
		 //A8_1 (43)
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 1;
	int correct_10 = 0;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A8_2 (44)
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 2;
	int correct_10 = 1;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A8_3 (45)
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 3;
	int correct_10 = 0;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A8_4 (46)
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 4;
	int correct_10 = 0;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A8_5 (47)
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 5;
	int correct_10 = 0;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A8_6 (48)
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage11"];
	int table = 8;
	int next_table = 9;
	int number = 6;
	int correct_10 = 0;
	array_1[7] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[8] = start_time;
	array_end[7] = end_time;
}
		 //A9_1 (49)
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 1;
	int correct_10 = 1;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A9_2 (50)
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 2;
	int correct_10 = 0;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A9_3 (51)
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 3;
	int correct_10 = 0;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A9_4 (52)
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 4;
	int correct_10 = 0;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A9_5 (53)
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 5;
	int correct_10 = 0;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A9_6 (54)
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage12"];
	int table = 9;
	int next_table = 10;
	int number = 6;
	int correct_10 = 0;
	array_1[8] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[9] = start_time;
	array_end[8] = end_time;
}
		 //A10_1 (55)
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 1;
	int correct_10 = 0;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A10_2 (56)
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 2;
	int correct_10 = 0;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A10_3 (57)
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 3;
	int correct_10 = 1;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A10_4 (58)
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 4;
	int correct_10 = 0;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A10_5 (59)
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 5;
	int correct_10 = 0;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A10_6 (60)
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage13"];
	int table = 10;
	int next_table = 11;
	int number = 6;
	int correct_10 = 0;
	array_1[9] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[10] = start_time;
	array_end[9] = end_time;
}
		 //A11_1 (62)
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 1;
	int correct_10 = 0;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A11_2 (63)
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 2;
	int correct_10 = 0;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A11_3 (64)
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 3;
	int correct_10 = 0;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A11_4 (65)
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 4;
	int correct_10 = 1;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A11_5 (66)
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 5;
	int correct_10 = 0;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A11_6 (67)
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage14"];
	int table = 11;
	int next_table = 12;
	int number = 6;
	int correct_10 = 0;
	array_1[10] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[11] = start_time;
	array_end[10] = end_time;
}
		 //A12_1 (68)
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 1;
	int correct_10 = 0;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A12_2 (69)
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 2;
	int correct_10 = 0;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A12_3 (70)
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 3;
	int correct_10 = 0;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A12_4 (71)
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 4;
	int correct_10 = 0;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A12_5 (72)
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 5;
	int correct_10 = 1;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A12_6 (73)
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage15"];
	int table = 12;
	int next_table = 13;
	int number = 6;
	int correct_10 = 0;
	array_1[11] = correct_10;
	int series = 1;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[12] = start_time;
	array_end[11] = end_time;
}
		 //A13_1 (74)
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 1;
	int correct_10 = 0;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A13_2 (75)
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 2;
	int correct_10 = 1;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A13_3 (76)
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 3;
	int correct_10 = 0;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A13_4 (77)
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 4;
	int correct_10 = 0;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A13_5 (78)
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 5;
	int correct_10 = 0;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A13_6 (79)
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage16"];
	int table = 13;
	int next_table = 14;
	int number = 6;
	int correct_10 = 0;
	array_1[12] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[13] = start_time;
	array_end[12] = end_time;
}
		 //A14_1 (80)
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 1;
	int correct_10 = 0;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 //A14_2 (81)
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 2;
	int correct_10 = 0;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 //A14_3 (82)
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 3;
	int correct_10 = 0;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 //A14_4 (83)
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 4;
	int correct_10 = 0;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 //A14_5 (84)
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 5;
	int correct_10 = 0;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 //A14_6 (85)
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage17"];
	int table = 14;
	int next_table = 15;
	int number = 6;
	int correct_10 = 1;
	array_1[13] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[14] = start_time;
	array_end[13] = end_time;
}
		 // table 15
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 1;
	int correct_10 = 1;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 2;
	int correct_10 = 0;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 3;
	int correct_10 = 0;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 4;
	int correct_10 = 0;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 5;
	int correct_10 = 0;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage18"];
	int table = 15;
	int next_table = 16;
	int number = 6;
	int correct_10 = 0;
	array_1[14] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[15] = start_time;
	array_end[14] = end_time;
}
		 // table 16
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 1;
	int correct_10 = 0;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 2;
	int correct_10 = 1;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 3;
	int correct_10 = 0;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 4;
	int correct_10 = 0;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 5;
	int correct_10 = 0;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage19"];
	int table = 16;
	int next_table = 17;
	int number = 6;
	int correct_10 = 0;
	array_1[15] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[16] = start_time;
	array_end[15] = end_time;
}
		 // table 17
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 1;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 0;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 0;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 0;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 0;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage20"];
	int table = 17;
	int next_table = 18;
	int number = 1;
	int correct_10 = 0;
	array_1[16] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[17] = start_time;
	array_end[16] = end_time;
}
		 // table 18
private: System::Void button110_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 1;
	int correct_10 = 0;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
private: System::Void button109_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 2;
	int correct_10 = 0;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
private: System::Void button108_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 3;
	int correct_10 = 1;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 4;
	int correct_10 = 0;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 5;
	int correct_10 = 0;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage21"];
	int table = 18;
	int next_table = 19;
	int number = 6;
	int correct_10 = 0;
	array_1[17] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[18] = start_time;
	array_end[17] = end_time;
}
		 // table 19
private: System::Void button116_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 1;
	int correct_10 = 0;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
private: System::Void button115_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 2;
	int correct_10 = 0;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
private: System::Void button114_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 3;
	int correct_10 = 0;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
private: System::Void button113_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 4;
	int correct_10 = 0;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
private: System::Void button112_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 5;
	int correct_10 = 1;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
private: System::Void button111_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage22"];
	int table = 19;
	int next_table = 20;
	int number = 6;
	int correct_10 = 0;
	array_1[18] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[19] = start_time;
	array_end[18] = end_time;
}
		 // table 20
private: System::Void button122_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 1;
	int correct_10 = 0;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
private: System::Void button121_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 2;
	int correct_10 = 0;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
private: System::Void button120_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 3;
	int correct_10 = 0;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
private: System::Void button119_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 4;
	int correct_10 = 0;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
private: System::Void button118_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 5;
	int correct_10 = 0;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
private: System::Void button117_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage23"];
	int table = 20;
	int next_table = 21;
	int number = 6;
	int correct_10 = 1;
	array_1[19] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[20] = start_time;
	array_end[19] = end_time;
}
		 // table 21
private: System::Void button128_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 1;
	int correct_10 = 0;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
private: System::Void button127_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 2;
	int correct_10 = 0;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
private: System::Void button126_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 3;
	int correct_10 = 0;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
private: System::Void button125_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 4;
	int correct_10 = 1;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
private: System::Void button124_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 5;
	int correct_10 = 0;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
private: System::Void button123_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage24"];
	int table = 21;
	int next_table = 22;
	int number = 6;
	int correct_10 = 0;
	array_1[20] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[21] = start_time;
	array_end[20] = end_time;
}
		 // table 22
private: System::Void button134_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 1;
	int correct_10 = 0;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
private: System::Void button133_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 2;
	int correct_10 = 0;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
private: System::Void button132_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 3;
	int correct_10 = 1;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
private: System::Void button131_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 4;
	int correct_10 = 0;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
private: System::Void button130_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 5;
	int correct_10 = 0;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
private: System::Void button129_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage25"];
	int table = 22;
	int next_table = 23;
	int number = 6;
	int correct_10 = 0;
	array_1[21] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[22] = start_time;
	array_end[21] = end_time;
}
		 // table 23
private: System::Void button140_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 1;
	int correct_10 = 0;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
private: System::Void button139_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 2;
	int correct_10 = 0;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
private: System::Void button138_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 3;
	int correct_10 = 0;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
private: System::Void button137_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 4;
	int correct_10 = 1;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
private: System::Void button136_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 5;
	int correct_10 = 0;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
private: System::Void button135_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage26"];
	int table = 23;
	int next_table = 24;
	int number = 6;
	int correct_10 = 0;
	array_1[22] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[23] = start_time;
	array_end[22] = end_time;
}
		 // table 24
private: System::Void button146_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 1;
	int correct_10 = 0;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
private: System::Void button145_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 2;
	int correct_10 = 0;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
private: System::Void button144_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 3;
	int correct_10 = 0;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
private: System::Void button143_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 4;
	int correct_10 = 0;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
private: System::Void button142_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 5;
	int correct_10 = 1;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
private: System::Void button141_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage27"];
	int table = 24;
	int next_table = 25;
	int number = 6;
	int correct_10 = 0;
	array_1[23] = correct_10;
	int series = 2;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[24] = start_time;
	array_end[23] = end_time;
}
		 // table 25
private: System::Void button152_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 1;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button151_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 2;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button150_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 3;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button154_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 4;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button149_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 5;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button148_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 6;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button147_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 7;
	int correct_10 = 0;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
private: System::Void button153_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage28"];
	int table = 25;
	int next_table = 26;
	int number = 8;
	int correct_10 = 1;
	array_1[24] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[25] = start_time;
	array_end[24] = end_time;
}
		 // table 26
private: System::Void button162_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 1;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button161_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 2;
	int correct_10 = 1;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button160_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 3;
	int correct_10 = 1;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button156_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 4;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button159_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 5;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button158_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 6;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button157_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 7;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
private: System::Void button155_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage29"];
	int table = 26;
	int next_table = 27;
	int number = 8;
	int correct_10 = 0;
	array_1[25] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[26] = start_time;
	array_end[25] = end_time;
}
		 // table 27
private: System::Void button170_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 1;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button169_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 2;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button168_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 3;
	int correct_10 = 1;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button164_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 4;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button167_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 5;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button166_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 6;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button165_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 7;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
private: System::Void button163_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage30"];
	int table = 27;
	int next_table = 28;
	int number = 8;
	int correct_10 = 0;
	array_1[26] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[27] = start_time;
	array_end[26] = end_time;
}
		 // table 28
private: System::Void button178_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 1;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button177_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 2;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button176_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 3;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button172_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 4;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button175_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 5;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button174_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 6;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button173_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 7;
	int correct_10 = 0;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
private: System::Void button171_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage31"];
	int table = 28;
	int next_table = 29;
	int number = 8;
	int correct_10 = 1;
	array_1[27] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[28] = start_time;
	array_end[27] = end_time;
}
		 // table 29
private: System::Void button186_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 1;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button185_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 2;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button184_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 3;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button180_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 4;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button183_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 5;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button182_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 6;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button181_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 7;
	int correct_10 = 1;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
private: System::Void button179_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage32"];
	int table = 29;
	int next_table = 30;
	int number = 8;
	int correct_10 = 0;
	array_1[28] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[29] = start_time;
	array_end[28] = end_time;
}
		 // table 30
private: System::Void button194_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 1;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button193_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 2;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button192_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 3;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button188_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 4;
	int correct_10 = 1;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button191_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 5;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button190_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 6;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button189_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 7;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
private: System::Void button187_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage33"];
	int table = 30;
	int next_table = 31;
	int number = 8;
	int correct_10 = 0;
	array_1[29] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[30] = start_time;
	array_end[29] = end_time;
}
		 // table 31
private: System::Void button202_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 1;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button201_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 2;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button200_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 3;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button196_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 4;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button199_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 5;
	int correct_10 = 1;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button198_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 6;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button197_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 7;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
private: System::Void button195_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage34"];
	int table = 31;
	int next_table = 32;
	int number = 8;
	int correct_10 = 0;
	array_1[30] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[31] = start_time;
	array_end[30] = end_time;
}
		 // table 32
private: System::Void button210_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 1;
	int correct_10 = 1;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button209_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 2;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button208_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 3;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button204_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 4;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button207_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 5;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button206_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 6;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button205_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 7;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
private: System::Void button203_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage35"];
	int table = 32;
	int next_table = 33;
	int number = 8;
	int correct_10 = 0;
	array_1[31] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[32] = start_time;
	array_end[31] = end_time;
}
		 // table 33
private: System::Void button218_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 1;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button217_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 2;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button216_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 3;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button212_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 4;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button215_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 5;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button214_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 6;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button213_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 7;
	int correct_10 = 1;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
private: System::Void button211_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage36"];
	int table = 33;
	int next_table = 34;
	int number = 8;
	int correct_10 = 0;
	array_1[32] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[33] = start_time;
	array_end[32] = end_time;
}
		 // table 34
private: System::Void button226_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 1;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button225_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 2;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button224_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 3;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button220_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 4;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button223_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 5;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button222_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 6;
	int correct_10 = 1;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button221_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 7;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
private: System::Void button219_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage37"];
	int table = 34;
	int next_table = 35;
	int number = 8;
	int correct_10 = 0;
	array_1[33] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[34] = start_time;
	array_end[33] = end_time;
}
		 // table 35
private: System::Void button234_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 1;
	int correct_10 = 1;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button233_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 2;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button232_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 3;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button228_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 4;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button231_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 5;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button230_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 6;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button229_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 7;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
private: System::Void button227_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage38"];
	int table = 35;
	int next_table = 36;
	int number = 8;
	int correct_10 = 0;
	array_1[34] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[35] = start_time;
	array_end[34] = end_time;
}
		 // table 36
private: System::Void button242_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 1;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button241_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 2;
	int correct_10 = 1;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button240_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 3;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button236_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 4;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button239_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 5;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button238_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 6;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button237_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 7;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
private: System::Void button235_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage39"];
	int table = 36;
	int next_table = 37;
	int number = 8;
	int correct_10 = 0;
	array_1[35] = correct_10;
	int series = 3;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[36] = start_time;
	array_end[35] = end_time;
}
		 // table 37
private: System::Void button250_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 1;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button249_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 2;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button248_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 3;
	int correct_10 = 1;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button244_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 4;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button247_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 5;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button246_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 6;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button245_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 7;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
private: System::Void button243_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage40"];
	int table = 37;
	int next_table = 38;
	int number = 8;
	int correct_10 = 0;
	array_1[36] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[37] = start_time;
	array_end[36] = end_time;
}
		 // table 38
private: System::Void button258_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 1;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button257_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 2;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button256_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 3;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button252_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 4;
	int correct_10 = 1;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button255_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 5;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button254_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 6;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button253_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 7;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
private: System::Void button251_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage41"];
	int table = 38;
	int next_table = 39;
	int number = 8;
	int correct_10 = 0;
	array_1[37] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[38] = start_time;
	array_end[37] = end_time;
}
		 // table 39
private: System::Void button266_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 1;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button265_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 2;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button264_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 3;
	int correct_10 = 1;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button260_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 4;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button263_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 5;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button262_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 6;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button261_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 7;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
private: System::Void button259_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage42"];
	int table = 39;
	int next_table = 40;
	int number = 8;
	int correct_10 = 0;
	array_1[38] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[39] = start_time;
	array_end[38] = end_time;
}
		 // table 40
private: System::Void button274_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 1;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button273_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 2;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button272_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 3;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button268_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 4;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button271_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 5;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button270_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 6;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button269_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 7;
	int correct_10 = 1;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
private: System::Void button267_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage43"];
	int table = 40;
	int next_table = 41;
	int number = 8;
	int correct_10 = 0;
	array_1[39] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[40] = start_time;
	array_end[39] = end_time;
}
		 // table 41
private: System::Void button282_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 1;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button281_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 2;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button280_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 3;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button276_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 4;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button279_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 5;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button278_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 6;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button277_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 7;
	int correct_10 = 0;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
private: System::Void button275_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage44"];
	int table = 41;
	int next_table = 42;
	int number = 8;
	int correct_10 = 1;
	array_1[40] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[41] = start_time;
	array_end[40] = end_time;
}
		 // table 42
private: System::Void button290_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 1;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button289_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 2;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button288_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 3;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button284_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 4;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button287_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 5;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button286_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 6;
	int correct_10 = 1;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button285_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 7;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
private: System::Void button283_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage45"];
	int table = 42;
	int next_table = 43;
	int number = 8;
	int correct_10 = 0;
	array_1[41] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[42] = start_time;
	array_end[41] = end_time;
}
		 // table 43
private: System::Void button298_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 1;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button297_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 2;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button296_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 3;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button292_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 4;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button295_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 5;
	int correct_10 = 1;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button294_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 6;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button293_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 7;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
private: System::Void button291_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage46"];
	int table = 43;
	int next_table = 44;
	int number = 8;
	int correct_10 = 0;
	array_1[42] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[43] = start_time;
	array_end[42] = end_time;
}
		 // table 44
private: System::Void button306_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 1;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button305_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 2;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button304_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 3;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button300_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 4;
	int correct_10 = 1;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button303_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 5;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button302_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 6;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button301_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 7;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
private: System::Void button299_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage47"];
	int table = 44;
	int next_table = 45;
	int number = 8;
	int correct_10 = 0;
	array_1[43] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[44] = start_time;
	array_end[43] = end_time;
}
		 // table 45
private: System::Void button314_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 1;
	int correct_10 = 1;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button313_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 2;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button312_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 3;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button308_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 4;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button311_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 5;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button310_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 6;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button309_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 7;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
private: System::Void button307_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage48"];
	int table = 45;
	int next_table = 46;
	int number = 8;
	int correct_10 = 0;
	array_1[44] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[45] = start_time;
	array_end[44] = end_time;
}
		 // table 46
private: System::Void button322_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 1;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button321_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 2;
	int correct_10 = 1;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button320_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 3;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button316_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 4;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button319_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 5;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button318_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 6;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button317_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 7;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
private: System::Void button315_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage49"];
	int table = 46;
	int next_table = 47;
	int number = 8;
	int correct_10 = 0;
	array_1[45] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[46] = start_time;
	array_end[45] = end_time;
}
		 // table 47
private: System::Void button330_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 1;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button329_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 2;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button328_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 3;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button324_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 4;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button327_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 5;
	int correct_10 = 1;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button326_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 6;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button325_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 7;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
private: System::Void button323_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage50"];
	int table = 47;
	int next_table = 48;
	int number = 8;
	int correct_10 = 0;
	array_1[46] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[47] = start_time;
	array_end[46] = end_time;
}
		 // table 48
private: System::Void button338_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 1;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button337_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 2;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button336_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 3;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button332_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 4;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button335_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 5;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button334_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 6;
	int correct_10 = 1;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button333_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 7;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
private: System::Void button331_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage51"];
	int table = 48;
	int next_table = 49;
	int number = 8;
	int correct_10 = 0;
	array_1[47] = correct_10;
	int series = 4;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[48] = start_time;
	array_end[47] = end_time;
}
		 // table 49
private: System::Void button346_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 1;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button345_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 2;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button344_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 3;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button340_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 4;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button343_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 5;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button342_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 6;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button341_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 7;
	int correct_10 = 1;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
private: System::Void button339_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage52"];
	int table = 49;
	int next_table = 50;
	int number = 8;
	int correct_10 = 0;
	array_1[48] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[49] = start_time;
	array_end[48] = end_time;
}
		 // table 50
private: System::Void button354_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 1;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button353_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 2;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button352_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 3;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button348_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 4;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button351_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 5;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button350_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 6;
	int correct_10 = 1;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button349_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 7;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
private: System::Void button347_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage53"];
	int table = 50;
	int next_table = 51;
	int number = 8;
	int correct_10 = 0;
	array_1[49] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[50] = start_time;
	array_end[49] = end_time;
}
		 // table 51
private: System::Void button362_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 1;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button361_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 2;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button360_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 3;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button356_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 4;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button359_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 5;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button358_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 6;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button357_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 7;
	int correct_10 = 0;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
private: System::Void button355_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage54"];
	int table = 51;
	int next_table = 52;
	int number = 8;
	int correct_10 = 1;
	array_1[50] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[51] = start_time;
	array_end[50] = end_time;
}
		 // table 52
private: System::Void button370_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 1;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button369_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 2;
	int correct_10 = 1;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button368_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 3;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button364_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 4;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button367_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 5;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button366_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 6;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button365_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 7;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
private: System::Void button363_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage55"];
	int table = 52;
	int next_table = 53;
	int number = 8;
	int correct_10 = 0;
	array_1[51] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[52] = start_time;
	array_end[51] = end_time;
}
		 // table 53
private: System::Void button378_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 1;
	int correct_10 = 1;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button377_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 2;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button376_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 3;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button372_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 4;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button375_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 5;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button374_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 6;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button373_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 7;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
private: System::Void button371_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage56"];
	int table = 53;
	int next_table = 54;
	int number = 8;
	int correct_10 = 0;
	array_1[52] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[53] = start_time;
	array_end[52] = end_time;
}
		 // table 54
private: System::Void button386_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 1;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button385_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 2;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button384_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 3;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button380_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 4;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button383_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 5;
	int correct_10 = 1;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button382_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 6;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button381_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 7;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
private: System::Void button379_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage57"];
	int table = 54;
	int next_table = 55;
	int number = 8;
	int correct_10 = 0;
	array_1[53] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[54] = start_time;
	array_end[53] = end_time;
}
		 // table 55
private: System::Void button394_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 1;
	int correct_10 = 1;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button393_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 2;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button392_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 3;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button388_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 4;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button391_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 5;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button390_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 6;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button389_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 7;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
private: System::Void button387_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage58"];
	int table = 55;
	int next_table = 56;
	int number = 8;
	int correct_10 = 0;
	array_1[54] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[55] = start_time;
	array_end[54] = end_time;
}
		 // table 56
private: System::Void button402_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 1;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button401_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 2;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button400_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 3;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button396_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 4;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button399_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 5;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button398_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 6;
	int correct_10 = 1;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button397_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 7;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
private: System::Void button395_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage59"];
	int table = 56;
	int next_table = 57;
	int number = 8;
	int correct_10 = 0;
	array_1[55] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[56] = start_time;
	array_end[55] = end_time;
}
		 // table 57
private: System::Void button410_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 1;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button409_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 2;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button408_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 3;
	int correct_10 = 1;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button404_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 4;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button407_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 5;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button406_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 6;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button405_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 7;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
private: System::Void button403_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage60"];
	int table = 57;
	int next_table = 58;
	int number = 8;
	int correct_10 = 0;
	array_1[56] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[57] = start_time;
	array_end[56] = end_time;
}
		 // table 58
private: System::Void button418_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 1;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button417_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 2;
	int correct_10 = 1;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button416_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 3;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button412_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 4;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button415_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 5;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button414_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 6;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button413_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 7;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
private: System::Void button411_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage61"];
	int table = 58;
	int next_table = 59;
	int number = 8;
	int correct_10 = 0;
	array_1[57] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[58] = start_time;
	array_end[57] = end_time;
}
		 // table 59
private: System::Void button426_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 1;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button425_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 2;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button424_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 3;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button420_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 4;
	int correct_10 = 1;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button423_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 5;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button422_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 6;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button421_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 7;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
private: System::Void button419_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage62"];
	int table = 59;
	int next_table = 60;
	int number = 8;
	int correct_10 = 0;
	array_1[58] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	code_1(next_table, second, start_time, dd1);
	array_start[59] = start_time;
	array_end[58] = end_time;
}
		 // table 60
private: System::Void button434_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 1;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button433_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 2;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button432_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 3;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button428_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 4;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button431_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 5;
	int correct_10 = 1;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button430_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 6;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button429_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 7;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void button427_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectedTab = tabControl1->TabPages["TabPage64"];
	int table = 60;
	//int next_table = 0;
	int number = 8;
	int correct_10 = 0;
	array_1[59] = correct_10;
	int series = 5;
	double start_time = 0.000;
	double end_time = 0.000;
	code_2(table, number, correct_10, second, end_time, dd1);
	//code_1(next_table, second, start_time, dd1);
	//array_start[60] = start_time;
	array_end[59] = end_time;
}
private: System::Void tabPage63_Click(System::Object^  sender, System::EventArgs^  e) {
	array_2(array_1, array_start, array_end, dd2);
	raven_time(array_start, array_end, dd3);
	getchar();
	exit(0);
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage64_Click(System::Object^  sender, System::EventArgs^  e) {
	array_2(array_1, array_start, array_end, dd2);
	raven_time(array_start, array_end, dd3);
	getchar();
	exit(0);
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
