#ifndef STYLETRANSAMERICA_H
#define STYLETRANSAMERICA_H

#include <QMotifStyle>
#include <QPalette>

QT_BEGIN_NAMESPACE
class QPainterPath;
QT_END_NAMESPACE


class StyleTransamerica : public QMotifStyle
{
    Q_OBJECT
public:
    StyleTransamerica() {}

    void polish(QPalette &palette);
    void polish(QWidget *widget);
    void unpolish(QWidget *widget);
    int pixelMetric(PixelMetric metric, const QStyleOption *option,
                    const QWidget *widget) const;
    int styleHint(StyleHint hint, const QStyleOption *option,
                  const QWidget *widget, QStyleHintReturn *returnData) const;
    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                       QPainter *painter, const QWidget *widget) const;
    void drawControl(ControlElement control, const QStyleOption *option,
                     QPainter *painter, const QWidget *widget) const;

private:
    static void setTexture(QPalette &palette, QPalette::ColorRole role,
                           const QPixmap &pixmap);
    static QPainterPath roundRectPath(const QRect &rect);
};


#endif // STYLETRANSAMERICA_H
