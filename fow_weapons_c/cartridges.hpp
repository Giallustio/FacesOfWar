	class fow_cartridge_303: ThingEffect {
		model = "\fow\fow_weapons\ammo\cartridge_303brit";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 60;
		disappearAtContact = 0;
		airRotation = 1.65;
	};
	class fow_cartridge_slug: fow_cartridge_303	{
		model = "\fow\fow_weapons\ammo\cartridge_slug";
	};
	class fow_cartridge_762x33: fow_cartridge_303 {
		model = "\fow\fow_weapons\ammo\cartridge_30carbine";
	};
	class fow_cartridge_792x33: fow_cartridge_303 {
		model = "\fow\fow_weapons\ammo\cartridge_792x33k";
	};
	class fow_cartridge_m1_clip: fow_cartridge_303 {
		model = "\fow\fow_weapons\garand\nyt_garand_clip";
	};