class CfgPatches
{
	class Wolfland_Loadingscreen_EXP
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts"
		};
	};
};
class CfgMods
{
	class Wolfland_Loadingscreen_EXP
	{
		dir="Wolfland_Loadingscreen_EXP";
		picture="9";
		action="";
		hideName=1;
		hidePicture=1;
		name="Wolfland_Loadingscreen_EXP";
		credits="stuecki";
		author="stuecki";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"stuecki_loadingscreen/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"stuecki_loadingscreen/Scripts/5_Mission"
				};
			};
		};
	};
};
