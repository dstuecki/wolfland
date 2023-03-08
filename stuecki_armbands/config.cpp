class CfgPatches
{
	class armband_stuecki
	{
		units[]=
		{
			"stuecki_Armband_AT",
			"stuecki_Armband_Regenbogen"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Medical"
		};
	};
};
class CfgMods
{
	class ARMBAND_STUECKI
	{
		dir="";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="stuecki";
		credits="";
		author="Stuecki";
		authorID="Stuecki";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class CfgVehicles
{
	class Armband_ColorBase;
	class stuecki_Armband_AT: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="AT";
		itemSize[]={1,1};
		itemsCargoSize[]={10,100};
		quickBarBonus=1;
		varWetMax=1;
		heatIsolation=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa",
			"stuecki_armbands\data\AT_co.paa"
		};
		attachments[]=
		{
			"Melee",
			"ScrewdriverSlot",
			"HatchetSlot",
			"PetrolLighterSlot",
			"CompassSlot",
			"CanOpenerSlot"
		};
	};
	class stuecki_Armband_Regenbogen: stuecki_Armband_AT
	{
		hiddenSelectionsTextures[] =
		{
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa",
			"stuecki_armbands\data\regenbogen_co.paa"
		};
	};
	class Inventory_Base;
	class CanOpener: Inventory_Base
	{
		inventorySlot[]+=
		{
			"CanOpenerSlot"
		};
	};
	class Screwdriver: Inventory_Base
	{
		inventorySlot[]+=
		{
			"ScrewdriverSlot"
		};
	};
	class PetrolLighter: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PetrolLighterSlot"
		};
	};
	class Matchbox: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PetrolLighterSlot"
		};
	};
	class ItemCompass;
	class Compass: ItemCompass
	{
		inventorySlot[]+=
		{
			"CompassSlot"
		};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]+=
		{
			"HatchetSlot"
		};
	};
};
class CfgSlots
{
	class CanOpener_Slot
	{
		name="CanOpenerSlot";
		displayName="CanOpener";
		ghostIcon="canteen";
	};
	class Screwdriver_Slot
	{
		name="ScrewdriverSlot";
		displayName="Screwdriver";
		ghostIcon="canteen";
	};
	class PetrolLighter_Slot
	{
		name="PetrolLighterSlot";
		displayName="PetrolLighter";
		ghostIcon="canteen";
	};
	class Compass_Slot
	{
		name="CompassSlot";
		displayName="Compass";
		ghostIcon="canteen";
	};
	class Hatchet_Slot
	{
		name="HatchetSlot";
		displayName="Hatchet";
		ghostIcon="canteen";
	};
};
