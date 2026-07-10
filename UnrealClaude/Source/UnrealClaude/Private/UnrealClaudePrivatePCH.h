#pragma once

#include "CoreMinimal.h"
#include "UnrealEd.h"
#include "Engine/Blueprint.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimBlueprint.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequence.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Misc/App.h"
#include "Misc/EngineVersion.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Policies/CondensedJsonPrintPolicy.h"
#include "Widgets/Text/STextBlock.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/UnrealType.h"

// Apple Clang 21 diagnoses an intentional first-element JSON lookup that
// exits a range loop with `break` as unreachable loop increment code. The
// module is built with warnings-as-errors by UE 5.8's Mac toolchain.
#if PLATFORM_MAC
#pragma clang diagnostic ignored "-Wunreachable-code-loop-increment"
#endif
