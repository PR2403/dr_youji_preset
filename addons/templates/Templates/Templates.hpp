class Templates {
    class RHS_NAPA; //import Vanilla_Base from A3A to use with defining a new vanilla template

    class dr_reb : RHS_NAPA
    {
        basepath = QPATHTOFOLDER(Templates\RHS); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        //flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "dr reb"; //the name shown in the selector
        file = "RHS_Reb_NAPA"; //the template file name
        //maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        //climate[] = {"arid", "arctic"}; //climate that the template is meant for
    };
};
