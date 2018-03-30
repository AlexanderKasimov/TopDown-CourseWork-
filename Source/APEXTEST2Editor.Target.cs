// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class APEXTEST2EditorTarget : TargetRules 
{
	public APEXTEST2EditorTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("APEXTEST2");
	}

	//
	// TargetRules interface.
	//


}
