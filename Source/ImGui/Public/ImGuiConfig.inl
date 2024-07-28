#pragma once

namespace ImGui
{
	/// Converts ImGui 32-bit color to UE color
	IMGUI_API FORCEINLINE FColor ConvertColor(ImU32 Color)
	{
		return FColor(Color);
	}
}
