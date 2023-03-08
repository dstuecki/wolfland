class CfgPatches
{
	class stuecki_JPC_Vest
	{
		units[]=
		{
			"stuecki_MMG_assault_pack_camo",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Headgear",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Gear_Drinks",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Radio",
			"DZ_Gear_Optics",
			"DZ_Characters_Glasses"
		};
		magazines[]={};
	};
};
class CfgMods
{
	class stuecki_jpc_vest
	{
		dir="";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="stuecki_MMG";
		credits="MightyMoitzbert";
		author="stuecki";
		authorID="MM";
		version="2.8";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
	};
};
class cfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		class DayZPlayer
		{
			class P3DAttachments
			{
				P3DProxies[]=
				{
					"spine1",
					"righthand_dummy",
					"spine2",
					"head",
					"rightlegroll",
					"spine3",
					"lefthand",
					"pelvis",
					"leftshoulder",
					"rightshoulder",
					"rightleg",
					"leftleg",
					"rightupleg",
					"rightuplegroll",
					"leftupleg",
					"leftuplegroll"
				};
				BoneNames[]=
				{
					"Spine1",
					"RightHand_Dummy",
					"Spine2",
					"Head",
					"RightLegRoll",
					"Spine3",
					"LeftHand",
					"Pelvis",
					"LeftShoulder",
					"RightShoulder",
					"RightLeg",
					"LeftLeg",
					"RightUpLeg",
					"RightUpLegRoll",
					"LeftUpLeg",
					"LeftUpLegRoll"
				};
			};
		};
	};
	class inventory_base;
	class Clothing;
	class stuecki_assault_pack_base: Clothing
	{
		displayName="";
		descriptionShort="Gear made by MightyMoitzbert.";
		model="\JPC_Vest\data\backpack\assault_pack_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		attachments[]=
		{
			"Melee",
			"WalkieTalkie",
			"Chemlight"
		};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={8,10};
		weight=2500;
		varWetMax=0.30000019;
		heatIsolation=1;
		isBack=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa",
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa",
			"\JPC_Vest\data\backpack\assault_pack\assault_pack_black.paa"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee"
		};
		class ClothingTypes
		{
			male="\JPC_Vest\data\backpack\assault_pack_m.p3d";
			female="\JPC_Vest\data\backpack\assault_pack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"JPC_Vest\data\backpack\assault_pack\assault_pack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class stuecki_MMG_assault_pack_camo: stuecki_assault_pack_base
	{
		scope=2;
		displayName="MMG Assault Pack Camo";
		hiddenSelectionsTextures[]=
		{
			"\stuecki_mmg_camo\data\backpack\assault_pack\assault_pack_stuecki_camo.paa",
			"\stuecki_mmg_camo\data\backpack\assault_pack\assault_pack_stuecki_camo.paa",
			"\stuecki_mmg_camo\data\backpack\assault_pack\assault_pack_stuecki_camo.paa"
		};
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		inventorySlot[]+=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6"
		};
	};
};
class CfgSlots
{
	class Slot_Belt_Left
	{
		name="Belt_Left";
		displayName="Bottle";
		ghostIcon="canteen";
	};
	class Slot_Belt_Back
	{
		name="Belt_Back";
		displayName="Sheath";
		ghostIcon="knifeholster";
	};
	class Slot_gloves
	{
		name="gloves";
		displayName="Gloves";
		ghostIcon="gloves";
	};
	class Slot_carbine
	{
		name="carbine";
		displayName="Climbing Carbine";
		ghostIcon="set:jpc_icons image:carbine";
	};
	class Slot_Vestpouch
	{
		name="Vestpouch";
		displayName="MagPouch/Pouches";
		ghostIcon="vestpouches";
	};
	class Slot_JPCmed_pouch
	{
		name="JPCmed_Pouch";
		displayName="MedPouch";
		ghostIcon="set:jpc_icons image:medpouch";
	};
	class Slot_JPCammo_pouch
	{
		name="JPCammo_pouch";
		displayName="AmmoPouch";
		ghostIcon="set:jpc_icons image:ammopouch";
	};
	class Slot_headphones
	{
		name="headphones";
		displayName="Combat Headphones";
		ghostIcon="set:jpc_icons image:headphones";
	};
	class Slot_tactical_pouch
	{
		name="tactical_pouch";
		displayName="Tactical/Mag/EOD Pouch";
		ghostIcon="set:jpc_icons image:doublemagpouch";
	};
	class Slot_tactical_pouch1
	{
		name="tactical_pouch1";
		displayName="Tactical/Mag/EOD Pouch";
		ghostIcon="set:jpc_icons image:doublemagpouch";
	};
	class Slot_tactical_pouch2
	{
		name="tactical_pouch2";
		displayName="Tactical/EOD Pouch";
		ghostIcon="set:jpc_icons image:tacticalpouch";
	};
	class Slot_tactical_pouch3
	{
		name="tactical_pouch3";
		displayName="Tactical Pouch";
		ghostIcon="set:jpc_icons image:tacticalpouch";
	};
	class Slot_single_magpouch
	{
		name="single_magpouch";
		displayName="Single MagPouch";
		ghostIcon="set:jpc_icons image:singlemagpouch";
	};
	class Slot_single_magpouch1
	{
		name="single_magpouch1";
		displayName="Single MagPouch";
		ghostIcon="set:jpc_icons image:singlemagpouch";
	};
	class Slot_double_magpouch
	{
		name="double_magpouch";
		displayName="Double Mag Pouch";
		ghostIcon="set:jpc_icons image:doublemagpouch";
	};
	class Slot_mmg_dump_pouch
	{
		name="mmg_dump_pouch";
		displayName="Dump Pouch";
		ghostIcon="set:jpc_icons image:dump_pouch";
	};
	class Slot_magazine2
	{
		name="magazine2";
		displayName="magazine2";
		ghostIcon="magazine2";
	};
	class Slot_magazine3
	{
		name="magazine3";
		displayName="magazine3";
		ghostIcon="magazine2";
	};
	class Slot_magazine4
	{
		name="magazine4";
		displayName="magazine4";
		ghostIcon="magazine2";
	};
	class Slot_magazine5
	{
		name="magazine5";
		displayName="magazine5";
		ghostIcon="magazine2";
	};
	class Slot_magazine6
	{
		name="magazine6";
		displayName="magazine6";
		ghostIcon="magazine2";
	};
	class Slot_grenade_a
	{
		name="grenade_a";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_grenade_b
	{
		name="grenade_b";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_mk5_chestpouch
	{
		name="mk5_chestpouch";
		displayName="MK5 Chest Pouch";
		ghostIcon="vestpouches";
	};
	class Slot_mk5_grenadepouch
	{
		name="mk5_grenadepouch";
		displayName="MK5 Grenade Pouch";
		ghostIcon="set:jpc_icons image:grenade_pouch";
	};
	class Slot_mk5_utilitypouch
	{
		name="mk5_utilitypouch";
		displayName="MK5 Utility Pouch";
		ghostIcon="set:jpc_icons image:utility_pouch";
	};
	class Slot_mmg_patch
	{
		name="mmg_patch";
		displayName="Patch";
		ghostIcon="armband";
	};
	class Slot_morphine
	{
		name="morphine";
		displayName="Morphine";
		ghostIcon="set:jpc_icons image:morphine";
	};
	class Slot_epinephrine
	{
		name="epinephrine";
		displayName="Epinephrine";
		ghostIcon="set:jpc_icons image:morphine";
	};
	class Slot_mmg_radio
	{
		name="mmg_radio";
		displayName="Radio";
		ghostIcon="";
	};
	class Slot_mmg_visor
	{
		name="mmg_visor";
		displayName="Visor";
		ghostIcon="gorkavisor";
	};
	class Slot_tactical_visor
	{
		name="tactical_visor";
		displayName="Visor";
		ghostIcon="gorkavisor";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyJPCMag_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="VestPouch";
		model="\JPC_Vest\data\JPCmag_pouch.p3d";
	};
	class ProxyJPCMed_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="JPCmed_pouch";
		model="\JPC_Vest\data\JPCmed_pouch.p3d";
	};
	class ProxyJPCsheath: ProxyAttachment
	{
		scope=2;
		inventorySlot="Belt_Back";
		model="\JPC_Vest\data\JPCsheath.p3d";
	};
	class Proxyholster: ProxyAttachment
	{
		scope=2;
		inventorySlot="Belt_Right";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
	};
	class ProxyJPCammo_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="JPCammo_pouch";
		model="\JPC_Vest\data\JPCammo_pouch.p3d";
	};
	class ProxyJPC_bottle: ProxyAttachment
	{
		scope=2;
		inventorySlot="Belt_Left";
		model="\JPC_Vest\data\JPC_bottle.p3d";
	};
	class Proxyheadphones: ProxyAttachment
	{
		scope=2;
		inventorySlot="headphones";
		model="\JPC_Vest\data\helmet\headphones.p3d";
	};
	class Proxycarbine: ProxyAttachment
	{
		scope=2;
		inventorySlot="carbine";
		model="\JPC_Vest\data\item\carbine.p3d";
	};
	class Proxygloves: ProxyAttachment
	{
		scope=2;
		inventorySlot="gloves";
		model="\DZ\characters\gloves\tactical_gloves_g.p3d";
	};
	class Proxytactical_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch";
		model="\JPC_Vest\data\tactical_pouch.p3d";
	};
	class Proxytactical_pouch1: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch1";
		model="\JPC_Vest\data\tactical_pouch.p3d";
	};
	class Proxytactical_pouch2: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch2";
		model="\JPC_Vest\data\tactical_pouch.p3d";
	};
	class Proxytactical_pouch3: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch3";
		model="\JPC_Vest\data\tactical_pouch.p3d";
	};
	class Proxysingle_magpouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="single_magpouch";
		model="\JPC_Vest\data\single_magpouch.p3d";
	};
	class Proxysingle_magpouch1: ProxyAttachment
	{
		scope=2;
		inventorySlot="single_magpouch1";
		model="\JPC_Vest\data\single_magpouch.p3d";
	};
	class Proxydouble_magpouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="double_magpouch";
		model="\JPC_Vest\data\double_magpouch.p3d";
	};
	class Proxydouble_magpouch1: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch1";
		model="\JPC_Vest\data\double_magpouch.p3d";
	};
	class Proxydouble_magpouch2: ProxyAttachment
	{
		scope=2;
		inventorySlot="tactical_pouch2";
		model="\JPC_Vest\data\double_magpouch.p3d";
	};
	class Proxymmg_dump_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="mmg_dump_pouch";
		model="\JPC_Vest\data\pouch\mmg_dump_pouch.p3d";
	};
	class Proxyweapon: ProxyAttachment
	{
		scope=2;
		inventorySlot="shoulder";
		model="\DZ\weapons\firearms\m4\m4a1.p3d";
	};
	class Proxycombatknife: ProxyAttachment
	{
		scope=2;
		inventorySlot="Knife";
		model="\DZ\weapons\melee\blade\combatknife.p3d";
	};
	class Proxynvg: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"NVG"
		};
		model="\DZ\characters\glasses\NVG.p3d";
	};
	class Proxygrenade_a: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"VestGrenadeA"
		};
		model="\DZ\characters\vests\proxy\proxy_grenade_a.p3d";
	};
	class Proxygrenade_b: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"VestGrenadeB"
		};
		model="\DZ\characters\vests\proxy\proxy_grenade_b.p3d";
	};
	class Proxymk5_chest_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="mk5_chestpouch";
		model="\JPC_Vest\data\pouch\mk5_chest_pouch.p3d";
	};
	class Proxymk5_grenade_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="mk5_grenadepouch";
		model="\JPC_Vest\data\pouch\mk5_grenade_pouch.p3d";
	};
	class Proxymk5_utility_pouch: ProxyAttachment
	{
		scope=2;
		inventorySlot="mk5_utilitypouch";
		model="\JPC_Vest\data\pouch\mk5_utility_pouch.p3d";
	};
	class Proxymmg_patch: ProxyAttachment
	{
		scope=2;
		inventorySlot="mmg_patch";
		model="\JPC_Vest\data\item\mmg_patch_rubber.p3d";
	};
	class ProxyMorphine: ProxyAttachment
	{
		scope=2;
		inventorySlot="morphine";
		model="\DZ\gear\medical\Morphine.p3d";
	};
	class ProxyEpinephrine: ProxyAttachment
	{
		scope=2;
		inventorySlot="epinephrine";
		model="\DZ\gear\medical\Epinephrine.p3d";
	};
	class Proxyhelmet_light: ProxyAttachment
	{
		scope=2;
		inventorySlot="helmetFlashlight";
		model="\dz\weapons\attachments\light\weaponlight_universal.p3d";
	};
	class ProxyWalkieTalkie: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"WalkieTalkie"
		};
		model="\DZ\gear\radio\walkietalkie.p3d";
	};
	class Proxymmg_visor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"mmg_visor"
		};
		model="\JPC_Vest\data\helmet\armored_helmet_visor.p3d";
	};
	class Proxyvisor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"tactical_visor"
		};
		model="\JPC_Vest\data\helmet\armored_helmet_visor.p3d";
	};
};
