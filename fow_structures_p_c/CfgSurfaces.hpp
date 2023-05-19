class CfgSurfaces
{
	class Default{};
	class Water{};
	class wx_water
 	{
  		access = 0;
  		files = "wx_water*";
  		rough = 0;
  		dust = 0;
  		soundEnviron = "wx_water";
		friction = 0.7;
		restitution = 0;
		isWater = 1;
  		character = "empty";
		impact = "default_Mat";
  		soundHit = "soft_ground";
 	};

	class wxbuildings_concrete: Default
 	{
  		access = 0;
  		files = "floor*";
  		rough = 0.001;
  		dust = 0.001;
  		soundEnviron = "concrete_ext";
  		character = "empty";
  		soundHit = "hard_ground";
 	};
	class wxbuildings_wood: Default
	{
  		access = 0;	
		files = "wood*";
		rough = 0.001;
		dust = 0.001;
		soundEnviron = "wood";
		character = "empty";
		soundHit = "soft_ground";
	};
	class wxbuildings_reed: Default
 	{
  		access = 0;
  		files = "reed*";
  		rough = 0.1;
  		dust = 0.5;
  		soundEnviron = "grass";
  		character = "empty";
  		soundHit = "soft_ground";
 	};
	class wxbuildings_dirt: Default
 	{
  		access = 0;
  		files = "wx_crater*";
  		rough = 0.3;
  		dust = 0.6;
  		soundEnviron = "sand";
  		character = "empty";
  		soundHit = "soft_ground";
 	};
};