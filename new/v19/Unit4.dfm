object Form4: TForm4
  Left = 333
  Top = 211
  Width = 979
  Height = 563
  Caption = 'Export'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 16
    Top = 16
    Width = 933
    Height = 413
    DataSource = ExportSource
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object ItemsFiles: TMemo
    Left = 856
    Top = 156
    Width = 93
    Height = 345
    ReadOnly = True
    TabOrder = 1
    Visible = False
  end
  object Button1: TButton
    Left = 180
    Top = 480
    Width = 185
    Height = 25
    Caption = #1045#1082#1089#1087#1086#1088#1090#1091#1074#1072#1090#1080' '#1103#1082'..'
    TabOrder = 2
    Visible = False
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 376
    Top = 480
    Width = 173
    Height = 25
    Caption = #1045#1082#1089#1087#1086#1088#1090#1091#1074#1072#1090#1080' '#1103#1082' Web'
    TabOrder = 3
    Visible = False
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 16
    Top = 480
    Width = 153
    Height = 25
    Caption = #1042#1080#1073#1088#1072#1090#1080' '#1079#1072#1087#1080#1089
    TabOrder = 4
    OnClick = Button3Click
  end
  object ItemsFilesWeb: TMemo
    Left = 880
    Top = 168
    Width = 69
    Height = 345
    ReadOnly = True
    TabOrder = 5
    Visible = False
  end
  object DBNavigator1: TDBNavigator
    Left = 360
    Top = 440
    Width = 224
    Height = 25
    DataSource = ExportSource
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    Hints.Strings = (
      'First record'
      'Prior record'
      'Next record'
      'Last record'
      'Refresh data')
    TabOrder = 6
  end
  object ADOQuery1: TADOQuery
    Connection = Form2.ADOConnection1
    CursorType = ctStatic
    DataSource = Form2.DataSource1
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM MON as m, TT as t, FS as f, CNS as c'
      
        'WHERE t.'#1050#1086#1076' = m.type_this AND f.'#1050#1086#1076' = m.field_science AND c.'#1050#1086#1076' ' +
        '= m.code_name_specialty')
    Left = 56
    Top = 156
  end
  object ExportSource: TDataSource
    DataSet = ADOQuery1
    Left = 16
    Top = 156
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = '*.csv'
    FileName = 'result.csv'
    Filter = '*.csv'
    Left = 12
    Top = 188
  end
end
