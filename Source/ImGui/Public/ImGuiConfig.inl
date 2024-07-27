#pragma once

FORCEINLINE FColor ImGui::ConvertColor(uint32 Color)
{
	return FColor(
		(Color >> IM_COL32_R_SHIFT) & 0xFF,
		(Color >> IM_COL32_G_SHIFT) & 0xFF,
		(Color >> IM_COL32_B_SHIFT) & 0xFF,
		(Color >> IM_COL32_A_SHIFT) & 0xFF
	);
}
