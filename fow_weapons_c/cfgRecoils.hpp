#define Xcoef (0.001)
#define Ycoef (0.004)
#define LynxXcoef (0.003)
#define LynxYcoef (0.008)

class cfgRecoils
{

	class Default;

	//	muzzleOuter[]	= x,y,a,b = { horizontal axis, vertical axis, horizontal magnitude, vertical magnitude }; plot: ((p+x)/a)^2 + ((q+y)/b)^2 = 1;
	//	muzzleInner[]	= x,y,a,b = { horizontal axis, vertical axis, horizontal magnitude, vertical magnitude }; plot: ((p+x)/a)^2 + ((q+y)/b)^2 = 1;
	//	kickBack[]		= min&max = { minimum, maximum };

	/*---------------------------------------------------------------------------
		Default recoil configuration
	---------------------------------------------------------------------------*/
	class recoil_default: Default
	{					//	x_		y|		a>		b^
		muzzleOuter[]	= { 0.3,	1.0,	0.3,	0.2 };
		kickBack[]		= { 0.03,	0.06 };
		permanent		= 0.1;
		temporary		= 0.01;
	};

	/*---------------------------------------------------------------------------
		Adjustments from the default recoil configuration
	---------------------------------------------------------------------------*/
	
	class fow_w_rifle_recoil: recoil_default
	{
		muzzleOuter[] = {0.7,4,1,1};
		kickBack[] = {0.06,0.08};
		temporary = 0.02;
	};
	class fow_w_smg_recoil: recoil_default
	{
		muzzleOuter[] = {0.4,0.7,0.5,0.5};
		kickBack[] = {0.06,0.085};
		permanent = 0.1;
		temporary = 0.03;
	};
	class fow_w_mg_recoil: recoil_default
	{
		muzzleOuter[] = {0.5,1,0.6,0.75};
		kickBack[] = {0.06,0.085};
 		permanent = 0.12;
 		temporary = 0.011;
	};
	class fow_w_at_recoil: recoil_default
	{
		muzzleOuter[] = {0.5,1.2,0.6,1.25};
		kickBack[] = {0.06,0.085};
 		permanent = 0.12;
 		temporary = 0.011;
	};
};