// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class APEXTEST2Target : TargetRules
{
	public APEXTEST2Target(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("APEXTEST2");
	}

	//
	// TargetRules interface.
	//


}
