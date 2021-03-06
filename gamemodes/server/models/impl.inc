#include <YSI\y_hooks>

hook OnScriptInit()
{
	#if USE_ARTWORK == 1
	//textdraws
	AddSimpleModel(-1, 19379, -1000, "blank.dff", "textdraws/textdraws.txd");
	//objects
	AddSimpleModel(-1, 19379, -1001, "objects/ivphone.dff", "objects/ivphone.txd");
	AddSimpleModel(-1, 19379, -1002, "objects/server_logo.dff", "objects/server_logo.txd");
	AddSimpleModel(-1, 19379, -1003, "objects/fixed_garage.dff", "objects/fixed_garage.txd");
	AddSimpleModel(-1, 19379, -1004, "objects/driver.dff", "objects/driver.txd");

	//skins
	/*AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20179, "skins/vc_BFOBE.dff", "skins/vc_BFOBE.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20001, "skins/vc_BFYPR.dff", "skins/vc_BFYPR.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20002, "skins/vc_BFYST.dff", "skins/vc_BFYST.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_FATMAN), 20003, "skins/vc_BMOBE.dff", "skins/vc_BMOBE.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20004, "skins/vc_C_worker.dff", "skins/vc_C_worker.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20005, "skins/vc_Cba.dff", "skins/vc_Cba.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20006, "skins/vc_Cla.dff", "skins/vc_Cla.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20007, "skins/vc_Clb.dff", "skins/vc_Clb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20008, "skins/vc_Gda.dff", "skins/vc_Gda.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20009, "skins/vc_Gdb.dff", "skins/vc_Gdb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20010, "skins/vc_HFOST.dff", "skins/vc_HFOST.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20011, "skins/vc_HFOTR.dff", "skins/vc_HFOTR.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20012, "skins/vc_HFYCG.dff", "skins/vc_HFYCG.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20013, "skins/vc_HFYMD.dff", "skins/vc_HFYMD.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20014, "skins/vc_HFYRI.dff", "skins/vc_HFYRI.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20015, "skins/vc_HFYST.dff", "skins/vc_HFYST.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_GANG1), 20016, "skins/vc_Hna.dff", "skins/vc_Hna.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_GANG2), 20017, "skins/vc_Hnb.dff", "skins/vc_Hnb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20018, "skins/vc_IGBudy2.dff", "skins/vc_IGBudy2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20019, "skins/vc_IGBudy3.dff", "skins/vc_IGBudy3.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_PROSTITUTE), 20020, "skins/vc_IGCandy.dff", "skins/vc_IGCandy.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20021, "skins/vc_IGColon.dff", "skins/vc_IGColon.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20022, "skins/vc_IGDiaz.dff", "skins/vc_IGDiaz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20022, "skins/vc_IGDiaz.dff", "skins/vc_IGDiaz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20022, "skins/vc_IGDiaz.dff", "skins/vc_IGDiaz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20022, "skins/vc_IGDiaz.dff", "skins/vc_IGDiaz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20023, "skins/vc_IGDick.dff", "skins/vc_IGDick.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20024, "skins/vc_IGGonz.dff", "skins/vc_IGGonz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_FATMAN), 20025, "skins/vc_IGHlary.dff", "skins/vc_IGHlary.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20026, "skins/vc_IGHlry2.dff", "skins/vc_IGHlry2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20027, "skins/vc_IGJezz.dff", "skins/vc_IGJezz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20027, "skins/vc_IGJezz.dff", "skins/vc_IGJezz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20027, "skins/vc_IGJezz.dff", "skins/vc_IGJezz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20028, "skins/vc_IGKen.dff", "skins/vc_IGKen.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20029, "skins/vc_IGMerc.dff", "skins/vc_IGMerc.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20030, "skins/vc_IGMike2.dff", "skins/vc_IGMike2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20030, "skins/vc_IGMike2.dff", "skins/vc_IGMike2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20031, "skins/vc_IGPercy.dff", "skins/vc_IGPercy.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20032, "skins/vc_IGPhil.dff", "skins/vc_IGPhil.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20033, "skins/vc_IGPhil3.dff", "skins/vc_IGPhil3.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20034, "skins/vc_IGSonny.dff", "skins/vc_IGSonny.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20035, "skins/vc_IGalscb.dff", "skins/vc_IGalscb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20036, "skins/vc_IGmike.dff", "skins/vc_IGmike.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20037, "skins/vc_IGphil2.dff", "skins/vc_IGphil2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20038, "skins/vc_Mba.dff", "skins/vc_Mba.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20039, "skins/vc_Mbb.dff", "skins/vc_Mbb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20040, "skins/vc_Pgb.dff", "skins/vc_Pgb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20041, "skins/vc_S_keep.dff", "skins/vc_S_keep.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20042, "skins/vc_Sga.dff", "skins/vc_Sga.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_PROSTITUTE), 20043, "skins/vc_Stripa.dff", "skins/vc_Stripa.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20044, "skins/vc_WFYLG.dff", "skins/vc_WFYLG.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20045, "skins/vc_WMYLG.dff", "skins/vc_WMYLG.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20046, "skins/vc_army.dff", "skins/vc_army.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20047, "skins/vc_avery.dff", "skins/vc_avery.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20048, "skins/vc_bfori.dff", "skins/vc_bfori.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_OLDFATWOMAN), 20049, "skins/vc_bfost.dff", "skins/vc_bfost.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_OLDWOMAN), 20050, "skins/vc_bfotr.dff", "skins/vc_bfotr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20051, "skins/vc_bfybe.dff", "skins/vc_bfybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20052, "skins/vc_bfyri.dff", "skins/vc_bfyri.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20053, "skins/vc_bga.dff", "skins/vc_bga.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20054, "skins/vc_bgb.dff", "skins/vc_bgb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20055, "skins/vc_bka.dff", "skins/vc_bka.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20056, "skins/vc_bkb.dff", "skins/vc_bkb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20057, "skins/vc_bmodk.dff", "skins/vc_bmodk.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20058, "skins/vc_bmost.dff", "skins/vc_bmost.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20059, "skins/vc_bmotr.dff", "skins/vc_bmotr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_GANG1), 20060, "skins/vc_bmybb.dff", "skins/vc_bmybb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20061, "skins/vc_bmybe.dff", "skins/vc_bmybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20062, "skins/vc_bmybu.dff", "skins/vc_bmybu.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20063, "skins/vc_bmycr.dff", "skins/vc_bmycr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_GANG2), 20064, "skins/vc_bmypi.dff", "skins/vc_bmypi.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20065, "skins/vc_bmyri.dff", "skins/vc_bmyri.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20066, "skins/vc_bmyst.dff", "skins/vc_bmyst.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20067, "skins/vc_burger.dff", "skins/vc_burger.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20068, "skins/vc_cbb.dff", "skins/vc_cbb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20069, "skins/vc_chef.dff", "skins/vc_chef.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20070, "skins/vc_colonel.dff", "skins/vc_colonel.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20071, "skins/vc_cop.dff", "skins/vc_cop.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20072, "skins/vc_courier.dff", "skins/vc_courier.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_OLDFATWOMAN), 20073, "skins/vc_csapoulet.dff", "skins/vc_csapoulet.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20074, "skins/vc_csdeal.dff", "skins/vc_csdeal.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20075, "skins/vc_csdirec.dff", "skins/vc_csdirec.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20076, "skins/vc_csdwayn.dff", "skins/vc_csdwayn.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20077, "skins/vc_csjetro.dff", "skins/vc_csjetro.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20078, "skins/vc_cskelly.dff", "skins/vc_cskelly.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20079, "skins/vc_cskentpaul.dff", "skins/vc_cskentpaul.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20080, "skins/vc_csmaude.dff", "skins/vc_csmaude.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_OLDMAN), 20081, "skins/vc_cspapa.dff", "skins/vc_cspapa.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20082, "skins/vc_csumbto.dff", "skins/vc_csumbto.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20083, "skins/vc_dgoon1.dff", "skins/vc_dgoon1.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20084, "skins/vc_diaz.dff", "skins/vc_diaz.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20085, "skins/vc_fbi.dff", "skins/vc_fbi.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20086, "skins/vc_fsfa.dff", "skins/vc_fsfa.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20087, "skins/vc_hfobe.dff", "skins/vc_hfobe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20088, "skins/vc_hfori.dff", "skins/vc_hfori.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20089, "skins/vc_hfybe.dff", "skins/vc_hfybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20090, "skins/vc_hfybu.dff", "skins/vc_hfybu.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_FATMAN), 20091, "skins/vc_hmobe.dff", "skins/vc_hmobe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20092, "skins/vc_hmoca.dff", "skins/vc_hmoca.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20093, "skins/vc_hmodk.dff", "skins/vc_hmodk.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20094, "skins/vc_hmori.dff", "skins/vc_hmori.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20095, "skins/vc_hmost.dff", "skins/vc_hmost.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20096, "skins/vc_hmotr.dff", "skins/vc_hmotr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20097, "skins/vc_hmyap.dff", "skins/vc_hmyap.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20098, "skins/vc_hmybe.dff", "skins/vc_hmybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20099, "skins/vc_hmyri.dff", "skins/vc_hmyri.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20100, "skins/vc_hmyst.dff", "skins/vc_hmyst.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_GANG1), 20101, "skins/vc_hnc.dff", "skins/vc_hnc.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20102, "skins/vc_igbuddy.dff", "skins/vc_igbuddy.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20103, "skins/vc_igmerc2.dff", "skins/vc_igmerc2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20104, "skins/vc_jfoto.dff", "skins/vc_jfoto.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20105, "skins/vc_jmoto.dff", "skins/vc_jmoto.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20106, "skins/vc_kentpaul.dff", "skins/vc_kentpaul.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20107, "skins/vc_lawyer.dff", "skins/vc_lawyer.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20108, "skins/vc_male01.dff", "skins/vc_male01.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20109, "skins/vc_medic.dff", "skins/vc_medic.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20110, "skins/vc_mitch.dff", "skins/vc_mitch.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20111, "skins/vc_pga.dff", "skins/vc_pga.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20112, "skins/vc_play10.dff", "skins/vc_play10.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20113, "skins/vc_play11.dff", "skins/vc_play11.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20114, "skins/vc_play12.dff", "skins/vc_play12.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20115, "skins/vc_player.dff", "skins/vc_player.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20116, "skins/vc_player2.dff", "skins/vc_player2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20117, "skins/vc_player3.dff", "skins/vc_player3.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20118, "skins/vc_player4.dff", "skins/vc_player4.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20119, "skins/vc_player5.dff", "skins/vc_player5.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20120, "skins/vc_player6.dff", "skins/vc_player6.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20121, "skins/vc_player7.dff", "skins/vc_player7.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20122, "skins/vc_player8.dff", "skins/vc_player8.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20123, "skins/vc_player9.dff", "skins/vc_player9.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20124, "skins/vc_psycho.dff", "skins/vc_psycho.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20125, "skins/vc_sam.dff", "skins/vc_sam.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20126, "skins/vc_sgb.dff", "skins/vc_sgb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20127, "skins/vc_sgc.dff", "skins/vc_sgc.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20128, "skins/vc_sonnygoona.dff", "skins/vc_soonygoona.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20129, "skins/vc_sonnygoonb.dff", "skins/vc_soonygoonb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20130, "skins/vc_spandxa.dff", "skins/vc_spandxa.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20131, "skins/vc_spandxb.dff", "skins/vc_spandxb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_PROSTITUTE), 20132, "skins/vc_stripb.dff", "skins/vc_stripb.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_PROSTITUTE), 20133, "skins/vc_stripc.dff", "skins/vc_stripc.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20134, "skins/vc_swat.dff", "skins/vc_swat.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20135, "skins/vc_taxi_d.dff", "skins/vc_taxi_d.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SWAT), 20136, "skins/vc_vcfd01.dff", "skins/vc_vcfd01.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20137, "skins/vc_vice1.dff", "skins/vc_vice1.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20138, "skins/vc_vice2.dff", "skins/vc_vice2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20139, "skins/vc_vice3.dff", "skins/vc_vice3.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20140, "skins/vc_vice4.dff", "skins/vc_vice4.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20141, "skins/vc_vice5.dff", "skins/vc_vice5.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20142, "skins/vc_vice6.dff", "skins/vc_vice6.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20143, "skins/vc_vice7.dff", "skins/vc_vice7.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20144, "skins/vc_vice8.dff", "skins/vc_vice8.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20145, "skins/vc_wfobe.dff", "skins/vc_wfobe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_JOGWOMAN), 20146, "skins/vc_wfogo.dff", "skins/vc_wfogo.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20147, "skins/vc_wfori.dff", "skins/vc_wfori.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20148, "skins/vc_wfosh.dff", "skins/vc_wfosh.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20148, "skins/vc_wfosh.dff", "skins/vc_wfosh.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20149, "skins/vc_wfost.dff", "skins/vc_wfost.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_WOMAN), 20150, "skins/vc_wfotr.dff", "skins/vc_wfotr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20151, "skins/vc_wfybe.dff", "skins/vc_wfybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_BUSYWOMAN), 20152, "skins/vc_wfybu.dff", "skins/vc_wfybu.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20153, "skins/vc_wfycst.dff", "skins/vc_wfycst.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20154, "skins/vc_wfyg1.dff", "skins/vc_wfyg1.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20155, "skins/vc_wfyg2.dff", "skins/vc_wfyg2.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20156, "skins/vc_wfyjg.dff", "skins/vc_wfyjg.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20157, "skins/vc_wfypr.dff", "skins/vc_wfypr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20158, "skins/vc_wfyri.dff", "skins/vc_wfyri.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20159, "skins/vc_wfysh.dff", "skins/vc_wfysh.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20160, "skins/vc_wfysk.dff", "skins/vc_wfysk.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_SEXYWOMAN), 20161, "skins/vc_wfyst.dff", "skins/vc_wfyst.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_FATMAN), 20162, "skins/vc_wmobe.dff", "skins/vc_wmobe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20163, "skins/vc_wmobu.dff", "skins/vc_wmobu.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20164, "skins/vc_wmoca.dff", "skins/vc_wmoca.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20165, "skins/vc_wmogo.dff", "skins/vc_wmogo.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20166, "skins/vc_wmori.dff", "skins/vc_wmori.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20167, "skins/vc_wmost.dff", "skins/vc_wmost.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20168, "skins/vc_wmotr.dff", "skins/vc_wmotr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20169, "skins/vc_wmybe.dff", "skins/vc_wmybe.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20170, "skins/vc_wmybu.dff", "skins/vc_wmybu.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20171, "skins/vc_wmycr.dff", "skins/vc_wmycr.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_FATMAN), 20172, "skins/vc_wmycw.dff", "skins/vc_wmycw.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20173, "skins/vc_wmygo.dff", "skins/vc_wmygo.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20174, "skins/vc_wmyjg.dff", "skins/vc_wmyjg.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20175, "skins/vc_wmypi.dff", "skins/vc_wmypi.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20176, "skins/vc_wmyri.dff", "skins/vc_wmyri.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20177, "skins/vc_wmysk.dff", "skins/vc_wmysk.txd");
	AddCharModel(ReturnSkinByPedStyle(PED_STYLE_MAN), 20178, "skins/vc_wmyst.dff", "skins/vc_wmyst.txd");*/
	#endif
	return 1;
}