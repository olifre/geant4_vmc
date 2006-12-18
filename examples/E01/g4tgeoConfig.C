// $Id: g4tgeoConfig.C,v 1.1 2006/12/12 16:21:37 brun Exp $
//
// Configuration macro for Geant4 VMC for Example01
// for geometry defined with Root and selected RG4Root navigation

void Config()
{
  // RunConfiguration for Geant4
  TG4RunConfiguration* runConfiguration 
    = new TG4RunConfiguration("geomRoot");
  
  // TGeant4
  TGeant4* geant4
    = new TGeant4("TGeant4", "The Geant4 Monte Carlo", runConfiguration);

  cout << "Geant4 has been created." << endl;
}