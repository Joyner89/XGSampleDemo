
#pragma once

#include "CoreMinimal.h"
#include "XGBaseStruct.generated.h"

USTRUCT(BlueprintType)
struct FXGBaseStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FString StructName = TEXT("");
};
