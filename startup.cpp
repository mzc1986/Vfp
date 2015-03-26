#include "startup.h"
#include "View/setuptab.h"
#include "View/mainview.h"
#include "utils.h"

namespace Ps
{
    Startup::Startup() :
        QObject(nullptr),
        m_mainView(*new MainView(nullptr, m_setupTab)),
        m_setupTab(*new SetupTab(nullptr))
    {
    }

    void Startup::show() const
    {
        m_mainView.show();
    }

    Startup::~Startup()
    {
        Utils::DestructorMsg(this);
        delete &m_mainView;
    }
}
