//
//  wxmApp.hpp
//  ARWeatherWidget
//
//  Created by Joseph Costello on 10/19/20.
//

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class wxmApp: public wxApp
{
public:
    virtual bool OnInit() override;
};
