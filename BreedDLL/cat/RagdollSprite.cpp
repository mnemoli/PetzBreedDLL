#include "pch.h"
#include "RagdollSprite.h"

using namespace Petz;

void RagdollSprite::InitPersonalityBiorhythms()
{
}

int RagdollSprite::MapBreedSpecificAction(UAction uaction)
{
	return RagdollUActionMapping[uaction - 621];
}

void RagdollSprite::InitBreedSprite(LoadInfo const& loadinfo, bool a)
{
	PetSprite::InitPetSprite(loadinfo, Cat, (char*)R"(\ptzfiles\bw\bw.lnz)", (char*)R"(\ptzfiles\cat\cat.scp)", (char*)R"(\ptzfiles\cat\bw\bw.scp)", a, 0x32);
	GetBannerDataFromFile(R"(\Ptzfiles\Cat\bw\BEvent_Cat_bw.txt)", banners);
}

void RagdollSprite::InitBreedSprite(LoadInfo const& loadinfo, char* str, bool a, bool b)
{
	PetSprite::InitPetSprite(loadinfo, Cat, str, (char*)R"(\ptzfiles\cat\cat.scp)", (char*)R"(\ptzfiles\cat\bw\bw.scp)", a, b);
}

void RagdollSprite::ConstructGenome(Genome& genome)
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

const unsigned int RagdollSprite::RagdollUActionMapping[] = { 0x000003F5,
 0x000003FC,
 0x000003ED,
 0x00000632,
 0x000003F5,
 0x0000040C,
 0x00000402,
 0x00000414,
 0x000003F7,
 0x00000633,
 0x00000634,
 0x00000635,
 0x00000636,
 0x000003FC,
 0x000003FC,
 0x000003FE,
 0x00000400,
 0x00000402,
 0x00000402,
 0x00000414,
 0x00000407,
 0x00000408,
 0x00000412,
 0x0000040E,
 0x0000040B,
 0x0000040F,
 0x00000410,
 0x000003FC,
 0x00000413,
 0x00000411,
 0x00000403,
 0x000003F5,
 0x000003FC,
 0x00000417,
 0x000003F5,
 0x0000041F,
 0x00000402,
 0x00000427,
 0x0000041A,
 0x000003FC,
 0x000003FC,
 0x000003FE,
 0x00000400,
 0x00000402,
 0x00000402,
 0x00000427,
 0x0000041C,
 0x00000408,
 0x00000425,
 0x00000421,
 0x0000041E,
 0x00000422,
 0x00000423,
 0x000003FC,
 0x00000426,
 0x00000424,
 0x00000403,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0xFFFFFFFF,
 0x000003F4,
 0x000003F9,
 0x0000040D,
 0x00000415,
 0x000003F4,
 0x000003F9,
 0x0000040D,
 0x00000428,
 0x00000693,

};
