#include "pch.h"
#include "SighthoundSprite.h"
#include "Genetics.h"

using namespace Petz;

void SighthoundSprite::InitPersonalityBiorhythms()
{
}

int SighthoundSprite::MapBreedSpecificAction(UAction uaction)
{
	return SighthoundUActionMapping[uaction-621];
}

void SighthoundSprite::InitBreedSprite(LoadInfo const& loadinfo, bool a)
{
	PetSprite::InitPetSprite(loadinfo, EChrz::Dog, (char*)R"(\ptzfiles\dh\dh.lnz)", (char*)R"(\ptzfiles\dog\dog.scp)", (char*)R"(\ptzfiles\dog\dh\dh.scp)", a, 0x32);
	GetBannerDataFromFile(R"(\Ptzfiles\Dog\dh\BEvent_Dog_dh.txt)", banners);
}

void SighthoundSprite::InitBreedSprite(LoadInfo const& loadinfo, char* str, bool a, bool b)
{
	PetSprite::InitPetSprite(loadinfo, EChrz::Dog, str, (char*)R"(\ptzfiles\dog\dog.scp)", (char*)R"(\ptzfiles\dog\dh\dh.scp)", a, b);
}

void SighthoundSprite::ConstructGenome(Genome& genome)
{
	PetSprite::ConstructGenome(genome);
	EZSetGeneGoalTrait(genome, Liveliness, High);
	EZSetGeneGoalTrait(genome, Playfulness, High);
	EZSetGeneGoalTrait(genome, Independence, Medium);
	EZSetGeneGoalTrait(genome, Confidence, High);
	EZSetGeneGoalTrait(genome, Naughtiness, Low);
	EZSetGeneGoalTrait(genome, Acrobaticness, Low);
	EZSetGeneGoalTrait(genome, Patience, Low);
	EZSetGeneSpriteTrait(genome, Mouselike, Low);
	auto a = genome.gamete1[0]->alleles[Color];
	a.AddState(Orange);
	genome.gamete1[0]->alleles[Color] = a;
	a = genome.gamete1[0]->alleles[Flavor];
	a.AddState(Garbage);
	genome.gamete1[0]->alleles[Flavor] = a;

}

const unsigned int SighthoundSprite::SighthoundUActionMapping[] = { 0x000001B0,
 0x000001B1,
 0x000001B2,
 0x00000610,
 0x000001B3,
 0x000001B4,
 0x0000024D,
 0x000001BA,
 0x000001BB,
 0x00000611,
 0x00000612,
 0x00000613,
 0x00000614,
 0x000001BE,
 0x000001BF,
 0x000001C1,
 0x000001C2,
 0x0000038D,
 0x0000038E,
 0x000001C3,
 0x000001C4,
 0x000001C6,
 0x000001C7,
 0x000001C8,
 0x000001CE,
 0x000001CA,
 0x000001CB,
 0x000001D2,
 0x000001D3,
 0x000001CD,
 0x000001D5,
 0x00000316,
 0x00000318,
 0x00000319,
 0x0000031A,
 0x0000031B,
 0x00000661,
 0x00000321,
 0x00000322,
 0x00000325,
 0x00000326,
 0x00000328,
 0x00000329,
 0x0000038F,
 0x00000390,
 0x0000032B,
 0x0000032C,
 0x0000032E,
 0x00000330,
 0x00000331,
 0x00000337,
 0x00000333,
 0x00000334,
 0x0000033B,
 0x0000033C,
 0x00000336,
 0x0000033E,
 0x000001B5,
 0x000001B6,
 0x000001B7,
 0x000001B8,
 0x000001B9,
 0x00000226,
 0x000001BC,
 0x000001BD,
 0x00000303,
 0x00000305,
 0x00000304,
 0x00000306,
 0x000001C0,
 0x000001C5,
 0x000001C9,
 0x000001CC,
 0x000001CF,
 0x000001D0,
 0x000001D1,
 0x0000054D,
 0x000001D4,
 0x0000031C,
 0x0000031D,
 0x0000031E,
 0x0000031F,
 0x00000320,
 0x00000348,
 0x00000323,
 0x00000324,
 0x00000662,
 0x00000663,
 0x00000664,
 0x00000665,
 0x00000327,
 0x0000032D,
 0x00000332,
 0x00000335,
 0x00000338,
 0x00000339,
 0x0000033A,
 0x0000054E,
 0x0000033D,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0x00000666,
};
