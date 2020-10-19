//
//  wxmApp.cpp
//  ARWeatherWidget
//
//  Created by Joseph Costello on 10/19/20.
//

#include "wxmApp.hpp"
#include "wxmView.hpp"


bool wxmApp::OnInit() {
    auto frame = new wxmView;
    frame->Show(true);
    return true;
}
