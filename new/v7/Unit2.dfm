object Form2: TForm2
  Left = -1029
  Top = 299
  Width = 1019
  Height = 750
  Caption = #1042#1080#1073#1110#1088' '#1076#1072#1085#1080#1093
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 985
    Height = 433
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'applicant_surname'
        Title.Caption = #1055#1088#1080#1079#1074#1080#1097#1077' '#1079#1076#1086#1073#1091#1074#1072#1095#1072
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'applicant_name'
        Title.Caption = #1030#1084#39#1103' '#1079#1076#1086#1073#1091#1074#1072#1095#1072
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'applicant_patronymic'
        Title.Caption = #1055#1086' '#1073#1072#1090#1100#1082#1086#1074#1110' '#1079#1076#1086#1073#1091#1074#1072#1095#1072
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'job_seeker'
        Title.Caption = #1055#1086#1089#1072#1076#1072' '#1079#1076#1086#1073#1091#1074#1072#1095#1072
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'name_institutions_job'
        Title.Caption = #1053#1072#1081#1084#1077#1085#1091#1074#1072#1085#1085#1103' '#1091#1089#1090#1072#1085#1086#1074#1080', '#1074' '#1103#1082#1110#1081' '#1087#1088#1072#1094#1102#1108' '#1079#1076#1086#1073#1091#1074#1072#1095
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'thesis_theme'
        Title.Caption = #1058#1077#1084#1072' '#1076#1080#1089#1077#1088#1090#1072#1094#1110#1111
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'call_specialized_academic_council'
        Title.Caption = #1064#1080#1092#1088' '#1089#1087#1077#1094#1110#1072#1083#1110#1079#1086#1074#1072#1085#1086#1111' '#1074#1095#1077#1085#1086#1111' '#1088#1072#1076#1080
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'name_institutions_protect'
        Title.Caption = #1053#1072#1081#1084#1077#1085#1091#1074#1072#1085#1085#1103' '#1091#1089#1090#1072#1085#1086#1074#1080', '
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'address_institutions_protected'
        Title.Caption = #1040#1076#1088#1077#1089#1072' '#1091#1089#1090#1072#1085#1086#1074#1080', '
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'phone_institutions_protected'
        Title.Caption = #1058#1077#1083#1077#1092#1086#1085' '#1091#1089#1090#1072#1085#1086#1074#1080', '#1074' '#1103#1082#1110#1081' '#1074#1110#1076#1073#1091#1076#1077#1090#1100#1089#1103' '#1079#1072#1093#1080#1089#1090
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'supervisor'
        Title.Caption = #1053#1072#1091#1082#1086#1074#1080#1081' '#1082#1077#1088#1110#1074#1085#1080#1082' '
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'oficial'
        Title.Caption = #1054#1092#1110#1094#1110#1081#1085#1110' '#1086#1087#1086#1085#1077#1085#1090#1080
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'data_publications'
        Title.Caption = #1044#1072#1090#1072' '#1087#1091#1073#1083#1080#1082#1072#1094#1110#1111
        Visible = True
      end>
  end
  object Button2: TButton
    Left = 28
    Top = 632
    Width = 117
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 1
    OnClick = Button2Click
  end
  object DBGrid2: TDBGrid
    Left = 352
    Top = 456
    Width = 357
    Height = 120
    DataSource = CNSsource
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'name'
        Title.Caption = #1064#1080#1092#1088' '#1110' '#1053#1072#1079#1074#1072' '#1085#1072#1091#1082#1086#1074#1086#1111' '#1089#1087#1077#1094#1110#1072#1083#1100#1085#1086#1089#1090#1110
        Visible = True
      end>
  end
  object DBGrid3: TDBGrid
    Left = 20
    Top = 456
    Width = 320
    Height = 120
    DataSource = TTsource
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'tt_name'
        Title.Caption = #1058#1080#1087' '#1076#1080#1089#1077#1088#1090#1072#1094#1110#1111
        Visible = True
      end>
  end
  object DBGrid4: TDBGrid
    Left = 724
    Top = 456
    Width = 269
    Height = 120
    DataSource = FSsource
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'fs_name'
        Title.Caption = #1043#1072#1083#1091#1079#1100' '#1085#1072#1091#1082#1080
        Visible = True
      end>
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=MON.mdb;Mode=ReadWr' +
      'ite;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmReadWrite
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 28
    Top = 20
  end
  object MON: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'MON'
    Left = 68
    Top = 20
  end
  object DataSource1: TDataSource
    DataSet = MON
    Left = 108
    Top = 20
  end
  object MainMenu1: TMainMenu
    object Edit1: TMenuItem
      Caption = 'Edit'
      object Open1: TMenuItem
        Caption = 'Open'
        OnClick = Open1Click
      end
      object Close1: TMenuItem
        Caption = 'Close'
        OnClick = Close1Click
      end
      object createItems: TMenuItem
        Caption = 'Add'
        OnClick = createItemsClick
      end
    end
    object Export1: TMenuItem
      Caption = 'Export'
    end
  end
  object CNS: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = #1050#1086#1076
    MasterFields = 'code_name_specialty'
    MasterSource = DataSource1
    TableName = 'CNS'
    Left = 352
    Top = 588
  end
  object TT: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = #1050#1086#1076
    MasterFields = 'type_this'
    MasterSource = DataSource1
    TableName = 'TT'
    Left = 28
    Top = 584
  end
  object FS: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = #1050#1086#1076
    MasterFields = 'field_science'
    MasterSource = DataSource1
    TableName = 'FS'
    Left = 728
    Top = 588
  end
  object TTsource: TDataSource
    DataSet = TT
    Left = 64
    Top = 584
  end
  object CNSsource: TDataSource
    DataSet = CNS
    Left = 392
    Top = 588
  end
  object FSsource: TDataSource
    DataSet = FS
    Left = 764
    Top = 588
  end
end
