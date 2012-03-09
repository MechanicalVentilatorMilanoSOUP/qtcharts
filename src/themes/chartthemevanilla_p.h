#include "charttheme_p.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class ChartThemeVanilla: public ChartTheme
{
public:
    ChartThemeVanilla():ChartTheme(QChart::ChartThemeVanilla)
    {
        m_seriesColors << QRgb(0xffd9c574);
        m_seriesColors << QRgb(0xffd6a896);
        m_seriesColors << QRgb(0xffa0a071);
        m_seriesColors << QRgb(0xffd2d234);
        m_seriesColors << QRgb(0xff88723a);

        generateSeriesGradients();

        QLinearGradient backgroundGradient;
        backgroundGradient.setColorAt(0.0, QRgb(0xfffbf9f1));
        backgroundGradient.setColorAt(1.0, QRgb(0xfff5f0dc));
        backgroundGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        m_backgroundGradient = backgroundGradient;
    }
};

QTCOMMERCIALCHART_END_NAMESPACE
