#pragma once
#include <wx/string.h>
#include <vector>

class cWeapon
{
public:
	cWeapon();

	void setWeaponTemplate(wxString weaponTemplate);
	void setWeaponName(wxString weaponName);
	void setWeaponId(wxString weaponId);
	void setWeaponModel(wxString weaponModel);
	void addWeaponAsset(std::string weaponAsset);

	wxString getWeaponTemplate();
	wxString getWeaponName();
	wxString getWeaponId();
	wxString getWeaponModel();

	void exportWeapon();

private:
	wxString weaponTemplate;
	wxString weaponName;
	wxString weaponId;
	wxString weaponModel;

	std::vector<std::string> weaponAssets[50] = {};
};
